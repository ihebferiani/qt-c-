#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QDebug>


class connexion
{
    QSqlDatabase db;
public:
    connexion();
    bool ouvrircnx();
    void fermercnx();
};
#endif // CONNEXION_H
