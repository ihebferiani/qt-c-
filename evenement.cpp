#include "evenement.h"
#include <QDebug>
#include "database.h"
evenement::evenement()
{


        ID=0;
        TYPE="";
        NOM_EVENET="";
        NUM_SALLE=0;
        NBRE_PARTI=0;


}
evenement::evenement(int ID,int NBRE_PARTI, QString TYPE,QString NOM_EVENET ,int NUM_SALLE,QDate DATE_EVENT)
{
    this->ID=ID;
    this->NBRE_PARTI=NBRE_PARTI;
    this->TYPE=TYPE;
    this->NOM_EVENET=NOM_EVENET;
    this->NUM_SALLE=NUM_SALLE;
    this->DATE_EVENT=DATE_EVENT;

}

QSqlQueryModel* evenement::afficher()
{
QSqlQueryModel* model= new QSqlQueryModel();
model->setQuery("select * from EVENEMENT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NBRE_PARTI"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM_EVENET"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr(" NUM_SALLE"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr(" DATE_EVENT"));
    return model;
}
bool evenement::ajouter()
{

    QSqlQuery query;


    query.prepare("INSERT INTO EVENEMENT (ID, NBRE_PARTI, TYPE ,NOM_EVENET ,NUM_SALLE,DATE_EVENT) "
                        "VALUES (:ID, :NBRE_PARTI, :TYPE ,:NOM_EVENET ,:NUM_SALLE,:DATE_EVENT)");
    query.bindValue(":ID",ID);
    query.bindValue(":NBRE_PARTI", NBRE_PARTI);
    query.bindValue(":TYPE",TYPE);
    query.bindValue(":NOM_EVENET",NOM_EVENET);
    query.bindValue(":NUM_SALLE",NUM_SALLE);
    query.bindValue(":DATE_EVENT",DATE_EVENT);


    return    query.exec();
}
bool evenement::supprimer(int ID)
{
QSqlQuery query;
QString res= QString::number(ID);
query.prepare("Delete from EVENEMENT where ID = :ID ");
query.bindValue(":ID", res);
return    query.exec();
}
bool evenement::modifier(int ID,int NBRE_PARTI, QString TYPE,QString NOM_EVENET ,int NUM_SALLE,QDate DATE_EVENT)
{
    QSqlQuery query;
    query.prepare("update EVENEMENT set  ID=:ID,NBRE_PARTI=:NBRE_PARTI,TYPE=:TYPE,NOM_EVENET=:NOM_EVENET,NUM_SALLE=:NUM_SALLE,DATE_EVENT=:DATE_EVENT where ID=:ID");
  /*,,,,
    */
    query.bindValue(":ID",ID);
    query.bindValue(":NBRE_PARTI",NBRE_PARTI);
    query.bindValue(":TYPE",TYPE);
    query.bindValue(":NOM_EVENET",NOM_EVENET);
    query.bindValue(":NUM_SALLE",NUM_SALLE);
    query.bindValue(":DATE_EVENT",DATE_EVENT);


    return query.exec();
}
bool evenement::verifierId(int ID)
{

    QSqlQuery query;
    QString n;
    QString  num = QString::number(ID);
            query.exec("SELECT ID from EVENEMENT");
            while (query.next())
            {
                n=query.value("ID").toString();
                if (n==num)
                {
                    return true;
                }
            }
    return false;

      }
QSqlQueryModel * evenement:: afficher_tri_ID()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from EVENEMENT order by ID");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NBRE_PARTI"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM_EVENET"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr(" NUM_SALLE"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr(" DATE_EVENT"));
    return model;
}
QSqlQueryModel * evenement::chercher_Event (QString ID)
{QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query;
ID='%'+ID+'%';
query.prepare(" select * from EVENEMENT where ID like :ID order by ID  ");
query.bindValue(":ID",ID);
query.exec();
model->setQuery(query);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NBRE_PARTI"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOM_EVENET"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr(" NUM_SALLE"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr(" DATE_EVENT"));

    return model;
}
