#include "database.h"

database::database()
{

}
bool database::ouvrirConnexion()
{
bool test=false;
db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A.");
db.setUserName("projet");//inserer nom de l'utilisateur
db.setPassword("esprit18");//inserer mot de passe de cet utilisateur


if (db.open()) test = true;


return test;

}
void database::fermerConnexion()
{db.close();}
