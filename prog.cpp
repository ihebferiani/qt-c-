#include "prog.h"
#include "ui_prog.h"
#include "login.h"
#include "dialog.h"
#include <QMessageBox>

prog::prog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prog)
{
    ui->setupUi(this);
setWindowTitle("CHECK IN  - version 1.0");
}

prog::~prog()
{
    delete ui;
}

void prog::on_pushButton_2_clicked()
{
    login S;

           QString username = ui->lineEdit->text();
           QString password = ui ->lineEdit_2->text();


           if (S.verifierCompte(ui->lineEdit->text(),ui ->lineEdit_2->text())==1)
           {


                       ui->lineEdit_2->clear();
                       ui->lineEdit->clear();

                    if (username=="arwa") {
                       QMessageBox::information(this, "login","Bienvenue agent de restauration");
                          class Dialog d;
                       d.setModal(true);
                       d.exec();
                    }else {
                                         QMessageBox::warning(this, "login"," Le mot de passe ou le login ne sont pas corréctes,Veuillez saisir une autre fois ");
                                      }



           } else {
                  QMessageBox::warning(this, "login"," Le mot de passe ou le login ne sont pas corréctes,Veuillez saisir une autre fois ");
               }


}

