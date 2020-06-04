#include "salle.h"
#include <QDebug>
#include "database.h"


salle::salle()
{


        ID_SALLE=0;
        NBRE_SALLE=0;
        DISPO_SALLE="";



}
salle::salle(int ID_SALLE,int NBRE_SALLE, QString DISPO_SALLE)
{
    this->ID_SALLE=ID_SALLE;
    this->NBRE_SALLE=NBRE_SALLE;
    this->DISPO_SALLE=DISPO_SALLE;

}

QSqlQueryModel* salle::afficher()
{
QSqlQueryModel* model= new QSqlQueryModel();
model->setQuery("select * from SALLE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_SALLE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NBRE_SALLE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO_SALLE"));

    return model;
}
bool salle::ajouter()
{

    QSqlQuery query;


    query.prepare("INSERT INTO SALLE (ID_SALLE, NBRE_SALLE, DISPO_SALLE) "
                        "VALUES (:ID_SALLE, :NBRE_SALLE, :DISPO_SALLE)");
    query.bindValue(":ID_SALLE",ID_SALLE);
    query.bindValue(":NBRE_SALLE", NBRE_SALLE);
    query.bindValue(":DISPO_SALLE",DISPO_SALLE);

    return    query.exec();
}
bool salle::supprimer(int ID_SALLE)
{
QSqlQuery query;
QString res= QString::number(ID_SALLE);
query.prepare("Delete from SALLE where ID_SALLE = :ID_SALLE ");
query.bindValue(":ID_SALLE", res);
return    query.exec();
}
bool salle::modifier(int ID_SALLE,int NBRE_SALLE, QString DISPO_SALLE)
{
    QSqlQuery query;
    query.prepare("update SALLE set  ID_SALLE=:ID_SALLE,NBRE_SALLE=:NBRE_SALLE,DISPO_SALLE=:DISPO_SALLE where ID_SALLE=:ID_SALLE");
  /*,,,,
    */
    query.bindValue(":ID_SALLE",ID_SALLE);
    query.bindValue(":NBRE_SALLE",NBRE_SALLE);
    query.bindValue(":DISPO_SALLE",DISPO_SALLE);


    return query.exec();
}
bool salle::verifierId(int ID_SALLE)
{

    QSqlQuery query;
    QString n;
    QString  num = QString::number(ID_SALLE);
            query.exec("SELECT ID_SALLE from SALLE");
            while (query.next())
            {
                n=query.value("ID_SALLE").toString();
                if (n==num)
                {
                    return true;
                }
            }
    return false;

      }
QSqlQueryModel * salle:: afficher_tri_ID()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from SALLE order by ID_SALLE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_SALLE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr(" NBRE_SALLE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO_SALLE"));

    return model;
}
QSqlQueryModel * salle::chercher_salle (QString ID_SALLE)
{QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query;
ID_SALLE='%'+ID_SALLE+'%';
query.prepare(" select * from SALLE where ID_SALLE like :ID_SALLE order by ID_SALLE  ");
query.bindValue(":ID_SALLE",ID_SALLE);
query.exec();
model->setQuery(query);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_SALLE"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr(" NBRE_SALLE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DISPO_SALLE"));


    return model;
}
