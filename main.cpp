#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QApplication>
#include "database.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    database c;
    bool test;
    test= c.ouvrirConnexion();
    MainWindow w;

    if(test)
{
w.show();


}
else
     QMessageBox::information(nullptr, QObject::tr("database is not open"),
                 QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);



return a.exec();
}


