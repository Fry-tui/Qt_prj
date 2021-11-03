#ifndef GDB_H
#define GDB_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql>
class gdb
{
public:
    gdb();
    ~gdb();
    bool Connect(const QString dbname);
    bool Disconnect();
    QSqlQuery Query(QString q);
    QSqlDatabase datebase;
    bool dbstate;
};

#endif // GDB_H
