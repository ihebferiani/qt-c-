#include "chambre.h"
#include <QDebug>
#include "database.h"
chambre::chambre()
{


        NUM_CHAMBRE=0;
        TYPE="";
        DISPO="";
        NOMBRE_DE_LITS=0;
        PRIX=0;


}
chambre::chambre(int NUM_CHAMBRE,int NOMBRE_DE_LITS, QString TYPE,int PRIX,QString DISPO)
{
    this->NUM_CHAMBRE=NUM_CHAMBRE;
    this->NOMBRE_DE_LITS=NOMBRE_DE_LITS;
    this->TYPE=TYPE;
    this->PRIX=PRIX;
    this->DISPO=DISPO;

}

QSqlQueryModel* chambre::afficher()
{
QSqlQueryModel* model= new QSqlQueryModel();
model->setQuery("select * from CHAMBRES");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM_CHAMBRE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMBRE_DE_LITS"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr(" DISPO"));
    return model;
}
bool chambre::ajouter()
{

    QSqlQuery query;


    query.prepare("INSERT INTO CHAMBRES (NUM_CHAMBRE, NOMBRE_DE_LITS, TYPE ,PRIX ,DISPO) "
                        "VALUES (:NUM_CHAMBRE, :NOMBRE_DE_LITS, :TYPE ,:PRIX ,:DISPO)");
    query.bindValue(":NUM_CHAMBRE",NUM_CHAMBRE);
    query.bindValue(":NOMBRE_DE_LITS", NOMBRE_DE_LITS);
    query.bindValue(":TYPE",TYPE);
    query.bindValue(":PRIX",PRIX);
    query.bindValue(":DISPO",DISPO);


    return    query.exec();
}
bool chambre::supprimer(int NUM_CHAMBRE)
{
QSqlQuery query;
QString res= QString::number(NUM_CHAMBRE);
query.prepare("Delete from CHAMBRES where NUM_CHAMBRE = :NUM_CHAMBRE ");
query.bindValue(":NUM_CHAMBRE", res);
return    query.exec();
}
bool chambre::modifier(int NUM_CHAMBRE,int NOMBRE_DE_LITS, QString TYPE,int PRIX,QString DISPO)
{
    QSqlQuery query;
    query.prepare("update CHAMBRES set  NUM_CHAMBRE=:NUM_CHAMBRE,NOMBRE_DE_LITS=:NOMBRE_DE_LITS,TYPE=:TYPE,PRIX=:PRIX,DISPO=:DISPO where NUM_CHAMBRE=:NUM_CHAMBRE");
  /*,,,,
    */
    query.bindValue(":NUM_CHAMBRE",NUM_CHAMBRE);
    query.bindValue(":NOMBRE_DE_LITS",NOMBRE_DE_LITS);
    query.bindValue(":TYPE",TYPE);
    query.bindValue(":PRIX",PRIX);
    query.bindValue(":DISPO",DISPO);

    return query.exec();
}
bool chambre::verifierId(int NUM_CHAMBRE)
{

    QSqlQuery query;
    QString n;
    QString  num = QString::number(NUM_CHAMBRE);
            query.exec("SELECT NUM_CHAMBRE from CHAMBRES");
            while (query.next())
            {
                n=query.value("NUM_CHAMBRE").toString();
                if (n==num)
                {
                    return true;
                }
            }
    return false;

      }
QSqlQueryModel * chambre:: afficher_tri_ID()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from CHAMBRES order by NUM_CHAMBRE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM_CHAMBRE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr(" NOMBRE_DE_LITS"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr(" DISPO"));
    return model;
}
QSqlQueryModel * chambre::chercher_Chambre (QString NUM_CHAMBRE)
{QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query;
NUM_CHAMBRE='%'+NUM_CHAMBRE+'%';
query.prepare(" select * from CHAMBRES where NUM_CHAMBRE like :NUM_CHAMBRE order by NUM_CHAMBRE  ");
query.bindValue(":NUM_CHAMBRE",NUM_CHAMBRE);
query.exec();
model->setQuery(query);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUM_CHAMBRE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr(" NOMBRE_DE_LITS"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr(" DISPO"));

    return model;
}
