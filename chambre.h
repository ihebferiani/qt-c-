#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class chambre
{
public:
    chambre();
    chambre(int NUM_CHAMBRE,int NOMBRE_DE_LITS, QString TYPE,int PRIX,QString DISPO);
    QSqlQueryModel * afficher();
    bool ajouter();
    bool supprimer(int NUM_CHAMBRE);
    bool modifier(int NUM_CHAMBRE,int NOMBRE_DE_LITS, QString TYPE,int PRIX,QString DISPO);
    bool verifierId(int NUM_CHAMBRE);
    QSqlQueryModel *  afficher_tri_ID();
    QSqlQueryModel * chercher_Chambre(QString NUM_CHAMBRE);
private:
int NUM_CHAMBRE;
int NOMBRE_DE_LITS;
QString TYPE;
int PRIX;
QString DISPO;
};

#endif // CHAMBRE_H
