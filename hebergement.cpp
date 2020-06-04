#include <QDebug>
#include "database.h"
#include "hebergement.h"
Hebergement::Hebergement()
{


        ID_HEBERGEMENT=0;
        NOM_HEBERGEMENT="";
        PRIX_HEBERGEMENT=0;

}
Hebergement::Hebergement(int ID_HEBERGEMENT,QString NOM_HEBERGEMENT, int PRIX_HEBERGEMENT)
{
    this->ID_HEBERGEMENT=ID_HEBERGEMENT;
    this->NOM_HEBERGEMENT=NOM_HEBERGEMENT;
    this->PRIX_HEBERGEMENT=PRIX_HEBERGEMENT;
}

QSqlQueryModel* Hebergement::afficher()
{
QSqlQueryModel* model= new QSqlQueryModel();
model->setQuery("select * from HEBERGEMENT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_HEBERGEMENT"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_HEBERGEMENT"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX_HEBERGEMENT"));
    return model;
}
bool Hebergement::ajouter()
{

    QSqlQuery query;


    query.prepare("INSERT INTO HEBERGEMENT (ID_HEBERGEMENT, NOM_HEBERGEMENT, PRIX_HEBERGEMENT) "
                        "VALUES (:ID_HEBERGEMENT, :NOM_HEBERGEMENT, :PRIX_HEBERGEMENT)");
    query.bindValue(":ID_HEBERGEMENT",ID_HEBERGEMENT);
    query.bindValue(":NOM_HEBERGEMENT", NOM_HEBERGEMENT);
    query.bindValue(":PRIX_HEBERGEMENT",PRIX_HEBERGEMENT);


    return    query.exec();
}
bool Hebergement::supprimer(int ID_HEBERGEMENT)
{
QSqlQuery query;
QString res= QString::number(ID_HEBERGEMENT);
query.prepare("Delete from HEBERGEMENT where ID_HEBERGEMENT = :ID_HEBERGEMENT ");
query.bindValue(":ID_HEBERGEMENT", res);
return    query.exec();
}
bool Hebergement::modifier(int ID_HEBERGEMENT,QString NOM_HEBERGEMENT, int PRIX_HEBERGEMENT)
{
    QSqlQuery query;
    query.prepare("update HEBERGEMENT set  ID_HEBERGEMENT=:ID_HEBERGEMENT,NOM_HEBERGEMENT=:NOM_HEBERGEMENT,PRIX_HEBERGEMENT=:PRIX_HEBERGEMENT where ID_HEBERGEMENT=:ID_HEBERGEMENT");
  /*,,,,
    */
    query.bindValue(":ID_HEBERGEMENT",ID_HEBERGEMENT);
    query.bindValue(":NOM_HEBERGEMENT", NOM_HEBERGEMENT);
    query.bindValue(":PRIX_HEBERGEMENT",PRIX_HEBERGEMENT);

    return query.exec();
}
bool Hebergement::verifierId(int ID_HEBERGEMENT)
{

    QSqlQuery query;
    QString n;
    QString  num = QString::number(ID_HEBERGEMENT);
            query.exec("SELECT ID_HEBERGEMENT from HEBERGEMENT");
            while (query.next())
            {
                n=query.value("ID_HEBERGEMENT").toString();
                if (n==num)
                {
                    return true;
                }
            }
    return false;

      }
QSqlQueryModel * Hebergement:: afficher_tri_ID()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from HEBERGEMENT order by ID_HEBERGEMENT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_HEBERGEMENT"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr(" NOM_HEBERGEMENT"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX_HEBERGEMENT"));

    return model;
}
QSqlQueryModel * Hebergement::chercher_Hebergement (QString ID_HEBERGEMENT)
{QSqlQueryModel * model= new QSqlQueryModel();
QSqlQuery query;
ID_HEBERGEMENT='%'+ID_HEBERGEMENT+'%';
query.prepare(" select * from HEBERGEMENT where ID_HEBERGEMENT like :ID_HEBERGEMENT order by ID_HEBERGEMENT  ");
query.bindValue(":ID_HEBERGEMENT",ID_HEBERGEMENT);
query.exec();
model->setQuery(query);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_HEBERGEMENT"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr(" NOM_HEBERGEMENT"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRIX_HEBERGEMENT"));

    return model;
}


