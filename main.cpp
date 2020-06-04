#include "prog.h"
#include <QApplication>
#include "connexion.h"
#include <QMessageBox>

#include <QDebug>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   prog pg;
    connexion c;
    bool test=c.ouvrircnx();
        if(test)
        {pg.show();
            QMessageBox::critical(nullptr, QObject::tr("Connexion avec succés"),
                        QObject::tr("Bienvenue.\n"
                                    ), QMessageBox::Cancel);

    }
        else
            QMessageBox::critical(nullptr, QObject::tr("Connexion faible"),
                        QObject::tr("Veillez rejoindre ultérieurement.\n"
                                   ), QMessageBox::Cancel);



        return a.exec();
    }


