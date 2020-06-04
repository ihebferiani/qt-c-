#ifndef SALLE_H
#define SALLE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class salle
{
public:
    salle();
    salle(int ID_SALLE,int NBRE_SALLE, QString DISPO_SALLE);
    QSqlQueryModel * afficher();
    bool ajouter();
    bool supprimer(int ID_SALLE);
    bool modifier(int ID_SALLE,int NBRE_SALLE, QString DISPO_SALLE);
    bool verifierId(int ID_SALLE);
    QSqlQueryModel *  afficher_tri_ID();
    QSqlQueryModel * chercher_salle(QString ID_SALLE);
private:
int ID_SALLE;
int NBRE_SALLE;
QString DISPO_SALLE;
};



#endif // SALLE_H
