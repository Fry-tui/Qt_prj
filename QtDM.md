# 系统开发手册

```c
/* 现阶段实现功能最为重要 */
```

版本记录：

|    日期    | 修订版本 |   描述   | 作者 |
| :--------: | :------: | :------: | :--: |
| 2021/10/28 |  1.0.0   | 项目设计 | xyq  |
| 2021/10/30 |  1.0.1   | 项目开发 | xyq  |

[TOC]

## 一、手册简介

### 1、基础

本文目的：记录基于Qt的XXXX项目开发过程中遇到的问题，以及项目的构思等

硬件平台：华清远见开发板FS4412

软件平台：Qt5.4.2(Linux)、qt-everywhere-opensource-src-5.3.1

工具链：gcc-4.6.4

参考文献：Qt 5.9 C++开发指南

### 2、构思

👉开发技术

基本控件使用：QComboBox、QCanlendar、QPainter、QtCharts、3D、音频控件、视频控件

动态背景

串口通信

多线程通信

多线程操作

TCP/IP传输

👉功能描述-车载设计

Step1：入口Widget→动态背景|ComBox框唤出不同的process

​			  客户端	

​					普通用户：注册、登入

​					管理员：账户定全局变量,主函数赋值,可更改但只有一个管理员

​			  服务器	

​					唤出QSql，这个其实不应该从入口Widget进

Step2：停车系统|音乐播放器|视频观影器|

​			 客户端：

Step3：|酒店预订|路径导航

### 3、资源

百度网盘：

GitHub：git@github.com:Fry-tui/Qt_prj.git

## 二、控件

### 1、QWidget

#### 构造函数

```c++
QWidget(QWidget *parent = 0, Qt::WindowFlags f = 0);  
       其中参数 parent 指向父窗口，如果这个参数为 0，则窗口就成为一个顶级窗口
       参数 f 是构造窗口的标志，主要用于控制窗口的类型和外观等，有以下常用值。
       1）Qt::FramelessWindowHint：没有边框的窗口。
       2）Qt::WindowStaysOnTopHint：总是最上面的窗口。
       3）Qt::CustomizeWindowHint：自定义窗口标题栏，以下标志必须与这个标志一起使用才有效，否则窗口将有默认的标题栏。
       4）Qt::WindowTitleHint：显示窗口标题栏。
       5）Qt::WindowSystemMenuHint：显示系统菜单。
       6）Qt::WindowMinimizeButtonHint：显示最小化按钮。
       7）Qt::WindowMaximizeButtonHint：显示最大化按钮。
       8）Qt::WindowMinMaxbuttonHint：显示最小化按钮和最大化按钮。
       9）Qt::WindowCloseButtonHint：显示关闭按钮。
```

#### 判断窗口

```c++
一个窗口是否为独立窗口可用下面的成员函数来判断：
bool isWindow() const;     // 判断是否为独立窗口  

下面这个函数可以得到窗口部件所在的独立窗口。
QWidget *window() const;      // 所得所在的独立窗口  
当然，如果窗口本身就是独立窗口，那么得到的就是自己。

而下面这个函数可以得到窗口的父窗口：
QWidget *parentWidget() const;    // 得到父窗口  

```

#### 窗口设置

```c++

窗口标题
WindowTitle 属性表示窗口的标题，与之相关的成员函数如下：
QString windowTitle() const;    // 获得窗口标题  
void setWindowTitle(const QString &text);    // 设置窗口标题为 text 

几何参数
这里的几何参数指的是窗口的大小和位置。一个窗口有两套几何参数，一套是窗口外边框所占的矩形区域，另一套是窗口客户区所占的矩形区域。所谓窗口客户区就是窗口中去除边框和标题栏用来显示内容的区域。这两套几何参数分别由两个 QRect 型的属性代表，相关的成员函数如下：
const QRect &geometry() const;                 // 获取客户区几何参数  
void setGeometry(int x, int y, int w, int h);    // 设置客户取几何参数  
void setGeometry(const QRect &rect);         // 设置客户区几何参数  
QRect frameGeometry() const;                  // 获取外边框几何参数 

注意：不要在 moveEvent 或 resizeEvent 两个事件处理函数中设置几何参数，否则将导致无限循环 窗口的几何参数也可以由用户的操作改变，这时也会发送相应的事件。
    
为了方便使用，与几何参数相关的成员函数还有以下这些：
QPoint pos() const;     // 获得窗口左上角的坐标(外边框几何参数)  
QSize size() const;      // 窗口大小 （客户区几何参数）  
int x() const;                  // 窗口左上角横坐标 （外边框几何参数）  
int y() const;                  // 窗口左上角纵坐标 （外边框几何参数）  
int height() const;        // 窗口高度 （客户区几何参数）  
int width() const;          // 窗口宽度 （客户区几何参数） 

可以看出，坐标全部是外边框几何参数，而大小全部是客户区几何参数。要获得外边框的大小需要用下面这个成员函数：
QSize frameSize() const;    // 窗口大小 （外边框几何参数）  
  
改变这些属性可以用下面这些成员函数：
void move(int x, int y);    // 将窗口左上角移动到坐标（x,  y）处；  
void move(const QPoint &pos);     // 将窗口左上角移动到 pos 处；  
void resize(int w, int h);     // 将窗口的宽度改为 w， 高度改为 h  
void resize(const QSize &size);     // 将窗口的大小改为  size 

可见性与隐藏
可见性指的是窗口是否显示在屏幕上的属性。被其他
窗口暂时遮挡住的窗口也属于可见的。可见性由窗口的 visible 属性表示，与之相关的成员函数如下：
bool isVisible() const;    // 判断窗口是否可见  
bool isHidden() const;   // 判断窗口是否隐藏  
virtual void setVisible(bool visible);   // 设置窗口是否隐藏  
void setHidden(bool hidden);    // 等价于 setvisible(!hidedn);


bool isMinimized() const;     // 判断窗口是否为最小化  
bool isMaximized() const;    // 判断窗口是否为最大化  
bool isFullScreen() const;   // 判断窗口是否为全屏  
void showMinimized();         // 以最小化方式显示窗口，这是一个槽  
void showMaximized();        // 以最大化方式显示窗口，这是一个槽  
void showFullScreen();        // 以全屏方式显示窗口，这是一个槽  
void showNormal();              // 以正常方式显示窗口，这是一个槽 

注意后 4 个函数同时也是槽。全屏方式与最大化的区别在于：全屏方式下窗口的边框和标题栏消失，客户区占据整个屏幕。窗口的各种状态仅对独立窗口有效，对窗口部件来说没有意义。

另外还有一个 windowState 属性和窗口状态有关，相关的成员函数如下：
Qt::WindowStates windowState() const;                         // 获取窗口状态  
void setWindowState(Qt::WindowStates windowState);      // 设置窗口状态  
 
        这里的 Qt::WindowStates 类型有以下几个取值。
        1）Qt::WindowNoState：无标志，正常状态。
        2）Qt::WindowMinimized：最小化状态。
        3）Qt::WindowMaxmized：最大化状态。
        4）Qt::WindowFullScreen：全屏状态。
        5）Qt::WindowActive：激活状态。
 
        这里取值可以用 “按位或” 的方式组合起来使用。
        需要注意的是，调用 setWindowState 函数将使窗口变为隐藏状态。
         
        
	使能
	处于使能状态的窗口才能处理键盘和鼠标等输入事件，反之，处于禁用状态的窗口不能处理这些事件。窗口是否处于使能状态由属性 enabled 表示，相关成员函数如下：
 
bool isEnabled() const;     // 获得窗口的使能装态  
void setEnabled(bool enable);  // 设置窗口的使能状态，这是一个槽  
void setDisabled(bool disabled);     // 等价于 setEnabled(!disable)，这是一个槽  


```



## 三、操作技术

## 四、通信技术

## 五、功能设计

## 六、代码实现

## 七、报错日志

## 八、移植步骤

## 附录

开发日志

| Version | Author | Date     | Message                      |
| ------- | ------ | -------- | ---------------------------- |
| 00001   | 许玉泉 | 21/10/28 | [Ready]功能设计,项目构思     |
| 00002   | 许玉泉 | 21/10/29 | [Ready]控件学习,通信原理学习 |
|         |        |          |                              |
|         |        |          |                              |
|         |        |          |                              |

