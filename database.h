#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>

class database
{
private:
    QSqlDatabase db;
public:
    database();
    bool ouvrirConnexion();
    void fermerConnexion();

};

#endif // DATABASE_H
