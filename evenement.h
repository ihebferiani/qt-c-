#ifndef EVENEMENT_H
#define EVENEMENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class evenement
{
public:
    evenement();
    evenement(int ID,int NBRE_PARTI, QString TYPE,QString NOM_EVENET ,int NUM_SALLE,QDate DATE_EVENT);
    QSqlQueryModel * afficher();
    bool ajouter();
    bool supprimer(int ID);
    bool modifier(int ID,int NBRE_PARTI, QString TYPE,QString NOM_EVENET ,int NUM_SALLE,QDate DATE_EVENT);
    bool verifierId(int ID);
    QSqlQueryModel *  afficher_tri_ID();
    QSqlQueryModel * chercher_Event(QString ID);
private:
int ID;
int NBRE_PARTI;
QString TYPE;
QString NOM_EVENET;

int NUM_SALLE;
QDate DATE_EVENT;
};


#endif // EVENEMENT_H
