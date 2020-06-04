#ifndef HEBERGEMENT_H
#define HEBERGEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class Hebergement
{


public:
    Hebergement();
    Hebergement(int ID_HEBERGEMENT,QString NOM_HEBERGEMENT, int PRIX_HEBERGEMENT);
    QSqlQueryModel * afficher();
    bool ajouter();
    bool supprimer(int ID_HEBERGEMENT);
    bool modifier(int ID_HEBERGEMENT,QString NOM_HEBERGEMENT, int PRIX_HEBERGEMENT);;
    bool verifierId(int ID_HEBERGEMENT);
    QSqlQueryModel *  afficher_tri_ID();
    QSqlQueryModel * chercher_Hebergement(QString ID_HEBERGEMENT);
private:
int ID_HEBERGEMENT;
int PRIX_HEBERGEMENT;
QString NOM_HEBERGEMENT;
};



#endif // HEBERGEMENT_H
