#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include "evenement.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->tabchambre->setModel(c.afficher());
    ui->tabevenement->setModel(e.afficher());
    ui->tabhebergement->setModel(h.afficher());
    ui->tabsalle->setModel(s.afficher());

    ui->comboBox_2->addItem("Oui");
    ui->comboBox_2->addItem("Non");
    ui->comboBox->addItem("Oui");
    ui->comboBox->addItem("Non");
    ui->comboBox_13->addItem("Oui");
    ui->comboBox_13->addItem("Non");
    ui->comboBox_3->addItem("Oui");
    ui->comboBox_3->addItem("Non");
    MainWindow::makePlot();

    QSqlQueryModel *model = new QSqlQueryModel;
     model->setQuery("select NUM_CHAMBRE from CHAMBRES");
     ui->comboBox_5->setModel(model);
     QSqlQueryModel *model1 = new QSqlQueryModel;
      model1->setQuery("select NUM_CHAMBRE from CHAMBRES");
      ui->rech->setModel(model1);

      QSqlQueryModel *model2 = new QSqlQueryModel;
      model2->setQuery("select ID from EVENEMENT");
      ui->comboBox_6->setModel(model2);

      QSqlQueryModel *model3 = new QSqlQueryModel;
      model3->setQuery("select ID from EVENEMENT");
      ui->recher->setModel(model3);

      QSqlQueryModel *model4 = new QSqlQueryModel;
      model4->setQuery("select ID_HEBERGEMENT from HEBERGEMENT");
      ui->comboBox_7->setModel(model4);

      QSqlQueryModel *model5 = new QSqlQueryModel;
      model5->setQuery("select ID_HEBERGEMENT from HEBERGEMENT");
      ui->recher1->setModel(model5);

      QSqlQueryModel *model6 = new QSqlQueryModel;
      model6->setQuery("select ID_SALLE from SALLE");
      ui->comboBox_14->setModel(model6);


      QSqlQueryModel *model7 = new QSqlQueryModel;
      model7->setQuery("select ID_SALLE from SALLE");
      ui->rech123->setModel(model7);

      QSqlQueryModel *model8 = new QSqlQueryModel;
      model8->setQuery("select ID_SALLE from SALLE");
      ui->comboBox_17->setModel(model8);

      QSqlQueryModel *model9 = new QSqlQueryModel;
      model9->setQuery("select ID_SALLE from SALLE where DISPO_SALLE ='Oui' ");
      ui->comboBox_16->setModel(model9);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);


}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_28_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_62_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_67_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_68_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_64_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_pushButton_66_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_74_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_76_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_77_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_73_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_70_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_85_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_80_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_84_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_81_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_83_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}




void MainWindow::on_pushButton_150_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

}

void MainWindow::on_pushButton_149_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);

}

void MainWindow::on_pushButton_146_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}

void MainWindow::on_pushButton_147_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}

void MainWindow::on_pushButton_159_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_pushButton_169_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_pushButton_181_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_pushButton_187_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_pushButton_191_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

}

void MainWindow::on_pushButton_185_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

}

void MainWindow::on_pushButton_171_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

}



void MainWindow::on_pushButton_162_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);

}



void MainWindow::on_pushButton_182_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);

}

void MainWindow::on_pushButton_188_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);

}

void MainWindow::on_pushButton_190_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}

void MainWindow::on_pushButton_168_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}

void MainWindow::on_pushButton_160_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}

void MainWindow::on_pushButton_161_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}

void MainWindow::on_pushButton_172_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}

void MainWindow::on_pushButton_183_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}

void MainWindow::on_pushButton_145_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_151_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_165_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_173_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_176_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_217_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

}

void MainWindow::on_pushButton_222_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

}

void MainWindow::on_pushButton_227_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

}

void MainWindow::on_pushButton_232_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

}

void MainWindow::on_pushButton_230_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}

void MainWindow::on_pushButton_225_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}

void MainWindow::on_pushButton_220_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}

void MainWindow::on_pushButton_210_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}

void MainWindow::on_pushButton_208_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}

void MainWindow::on_pushButton_213_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}

void MainWindow::on_pushButton_223_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}

void MainWindow::on_pushButton_228_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}

void MainWindow::on_pushButton_229_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);

}

void MainWindow::on_pushButton_219_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);

}

void MainWindow::on_pushButton_214_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);

}

void MainWindow::on_pushButton_209_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);

}

void MainWindow::on_pushButton_211_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);

}

void MainWindow::on_pushButton_216_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);

}

void MainWindow::on_pushButton_221_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);

}

void MainWindow::on_pushButton_226_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);

}

void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_240_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}

void MainWindow::on_pushButton_34_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);

}

void MainWindow::on_pushButton_242_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);

}

void MainWindow::on_pushButton_239_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}

void MainWindow::on_pushButton_237_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);

}

void MainWindow::on_pushButton_248_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

}

void MainWindow::on_pushButton_243_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);

}

void MainWindow::on_pushButton_250_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);

}

void MainWindow::on_pushButton_247_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);

}

void MainWindow::on_pushButton_245_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);

}

void MainWindow::on_pushButton_244_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_194_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_196_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_199_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_202_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_205_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_145_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_194_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_196_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_199_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_202_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_205_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_241_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_244_released()
{
    ui->stackedWidget->setCurrentIndex(0);

}
void MainWindow::on_pushButton_148_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}void MainWindow::on_pushButton_163_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}void MainWindow::on_pushButton_170_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_pushButton_241_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pb_ajouter_clicked()
{
    int NUM_CHAMBRE = ui->NUM_CHAMBRE->text().toInt();
    int NOMBRE_DE_LITS = ui->NOMBRE_DE_LITS->text().toInt();
    int PRIX = ui->PRIX->text().toInt();
    QString TYPE= ui->TYPE->text();
    QString DISPO= ui->comboBox->currentText();


  chambre c(NUM_CHAMBRE,NOMBRE_DE_LITS,TYPE,PRIX,DISPO);
  bool testt=c.verifierId(NUM_CHAMBRE);

  if(testt)
  {
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Chambre"),
                  QObject::tr("déjà existant !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

    }
  else
  {
  bool test=c.ajouter();
  if(test)
{

      ui->tabchambre->setModel(c.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un Chambre"),
                  QObject::tr("Chambre ajouté.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Chambre"),
                  QObject::tr("Erreur !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);
}
}


void MainWindow::on_pb_ajouter_4_clicked()
{
    int NUM_CHAMBRE = ui->NUM_CHAMBRE_2->text().toInt();
    int NOMBRE_DE_LITS = ui->NOMBRE_DE_LITS_2->text().toInt();
    int PRIX = ui->PRIX_2->text().toInt();
    QString TYPE= ui->TYPE_2->text();
    QString DISPO= ui->comboBox_2->currentText();

     chambre c;
       bool test;
       test=c.modifier(NUM_CHAMBRE,NOMBRE_DE_LITS,TYPE,PRIX,DISPO);
       if(test)
       {
           ui->tabchambre->setModel(c.afficher());

          QMessageBox::information(nullptr,QObject::tr("modifier client"),
            QObject::tr(" client modifer") ,QMessageBox::Cancel);

         }else

             QMessageBox::critical(nullptr,QObject::tr("modifier client"),
               QObject::tr("Erreur !.\n""Click Ok to exit."), QMessageBox::Ok);

}

void MainWindow::on_pushButton_33_clicked()
{
    QSqlQuery query;

         int NUM_CHAMBRE = ui->NUM_CHAMBRE_2->text().toInt();
        query.prepare(" select * from CHAMBRES where NUM_CHAMBRE = :NUM_CHAMBRE   ");
        query.bindValue(":NUM_CHAMBRE",NUM_CHAMBRE);
        query.exec();


            while(query.next()) {

            ui->NUM_CHAMBRE_2->setText(query.value(0).toString());
             ui->NOMBRE_DE_LITS_2->setText(query.value(1).toString());
             ui->PRIX_2->setText(query.value(3).toString());
              ui->TYPE_2->setText(query.value(2).toString());
            int index=ui->comboBox_2->findText(query.value(4).toString());
            ui->comboBox_2->setCurrentIndex(index);

}
}

void MainWindow::on_supprimer_clicked()
{

        int NUM_CHAMBRE = ui->comboBox_5->currentText().toInt();
        bool test=c.supprimer(NUM_CHAMBRE);
        if(test)
        {ui->tabchambre->setModel(c.afficher());
            QMessageBox::information(nullptr, QObject::tr("Supprimer un client"),
                        QObject::tr("client supprimé.\n"
                                    "Click Ok to exit."), QMessageBox::Ok);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer un client"),
                        QObject::tr("Erreur !.\n"
                                    "Click Ok to exit."), QMessageBox::Ok);

}

void MainWindow::on_rechh_clicked()
{

    QString NUM_CHAMBRE = ui->rech->currentText();
    ui->tabcha->setModel(c.chercher_Chambre(NUM_CHAMBRE));
}



void MainWindow::on_pb_ajouter_5_clicked()
{

    int ID = ui->id->text().toInt();
    int NBRE_PARTI = ui->NBRE_PARTI->text().toInt();
    int NUM_SALLE = ui->comboBox_16->currentText().toInt();
    QString TYPE= ui->TYPE_3->text();
    QString NOM_EVENET= ui->NOM_EVENET->text();
    QDate DATE_EVENT=ui->DATE_EVENT->date();


  evenement e(ID, NBRE_PARTI, TYPE, NOM_EVENET , NUM_SALLE, DATE_EVENT);
  bool testt=e.verifierId(ID);

  if(testt)
  {
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un evenement"),
                  QObject::tr("déjà existant !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

    }
  else
  {
  bool test=e.ajouter();
  if(test)
{

      ui->tabevenement->setModel(e.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un evenement"),
                  QObject::tr("evenement ajouté.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

QSqlQueryModel *model6 = new QSqlQueryModel;
model6->setQuery("select ID_SALLE from SALLE");
ui->comboBox_14->setModel(model6);


QSqlQueryModel *model7 = new QSqlQueryModel;
model7->setQuery("select ID_SALLE from SALLE");
ui->rech123->setModel(model7);

QSqlQueryModel *model8 = new QSqlQueryModel;
model8->setQuery("select ID_SALLE from SALLE");
ui->comboBox_17->setModel(model8);

QSqlQueryModel *model9 = new QSqlQueryModel;
model9->setQuery("select ID_SALLE from SALLE where DISPO_SALLE ='Oui' ");
ui->comboBox_16->setModel(model9);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un evenement"),
                  QObject::tr("Erreur !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);
}
}

void MainWindow::on_pb_ajouter_6_clicked()
{
    int ID = ui->idd->text().toInt();
    int NBRE_PARTI = ui->NBRE_PARTII_2->text().toInt();
    int NUM_SALLE = ui->comboBox_16->currentText().toInt();
    QString TYPE= ui->TYPE_4->text();
    QString NOM_EVENET= ui->NOM_EVENETT->text();
    QDate DATE_EVENT=ui->DATE_EVENTT->date();

     evenement e;
       bool test;
       test=e.modifier(ID, NBRE_PARTI, TYPE, NOM_EVENET , NUM_SALLE, DATE_EVENT);
       if(test)
       {
           ui->tabevenement->setModel(e.afficher());

          QMessageBox::information(nullptr,QObject::tr("modifier Evenement"),
            QObject::tr(" Evenement creé") ,QMessageBox::Cancel);

         }else

             QMessageBox::critical(nullptr,QObject::tr("modifier Evenement"),
               QObject::tr("Erreur !.\n""Click Ok to exit."), QMessageBox::Ok);
}

void MainWindow::on_pushButton_164_clicked()
{
    QSqlQuery query;

         int ID = ui->idd->text().toInt();
        query.prepare(" select * from EVENEMENT where ID = :ID   ");
        query.bindValue(":ID",ID);
        query.exec();


            while(query.next()) {

            ui->idd->setText(query.value(0).toString());
             ui->NBRE_PARTII_2->setText(query.value(1).toString());
             ui->TYPE_4->setText(query.value(2).toString());
              ui->NOM_EVENETT->setText(query.value(3).toString());
              int index=ui->comboBox_17->findText(query.value(4).toString());
              ui->comboBox_2->setCurrentIndex(index);
              ui->DATE_EVENTT->setDate(query.value(5).toDate());


}
}

void MainWindow::on_supprimer_3_clicked()
{
    int ID = ui->comboBox_5->currentText().toInt();
    bool test=e.supprimer(ID);
    if(test)
    {           ui->tabevenement->setModel(e.afficher());

        QMessageBox::information(nullptr, QObject::tr("Supprimer un Evenement"),
                    QObject::tr("Evenement supprimé.\n"
                                "Click Ok to exit."), QMessageBox::Ok);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Evenement"),
                    QObject::tr("Erreur !.\n"
                                "Click Ok to exit."), QMessageBox::Ok);
}

void MainWindow::on_pushButton_192_clicked()
{
    QString ID = ui->recher->currentText();
    ui->tabeventtt->setModel(e.chercher_Event(ID));
}

void MainWindow::on_pb_ajouter_7_clicked()
{

    int ID_HEBERGEMENT = ui->id_h->text().toInt();
    QString NOM_HEBERGEMENT= ui->nom_h->text();
    int PRIX_HEBERGEMENT = ui->prix_h->text().toInt();



  Hebergement h(ID_HEBERGEMENT, NOM_HEBERGEMENT, PRIX_HEBERGEMENT);
  bool testt=h.verifierId(ID_HEBERGEMENT);

  if(testt)
  {
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Hebergement"),
                  QObject::tr("déjà existant !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

    }
  else
  {
  bool test=h.ajouter();
  if(test)
{

      ui->tabhebergement->setModel(h.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter un Hebergement"),
                  QObject::tr("Hebergement ajouté.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Hebergement"),
                  QObject::tr("Erreur !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);
}
}

void MainWindow::on_pb_ajouter_8_clicked()
{
    int ID_HEBERGEMENT = ui->id_hh->text().toInt();
    QString NOM_HEBERGEMENT= ui->nom_hh->text();
    int PRIX_HEBERGEMENT = ui->prix_hh->text().toInt();

     Hebergement h;
       bool test;
       test=h.modifier(ID_HEBERGEMENT, NOM_HEBERGEMENT, PRIX_HEBERGEMENT);
       if(test)
       {
           ui->tabhebergement->setModel(h.afficher());

          QMessageBox::information(nullptr,QObject::tr("modifier Hebergement"),
            QObject::tr(" Hebergement Modifieé") ,QMessageBox::Cancel);

         }else

             QMessageBox::critical(nullptr,QObject::tr("modifier Hebergement"),
               QObject::tr("Erreur !.\n""Click Ok to exit."), QMessageBox::Ok);
}

void MainWindow::on_pushButton_251_clicked()
{
    QSqlQuery query;

         int ID_HEBERGEMENT = ui->id_hh->text().toInt();
        query.prepare(" select * from HEBERGEMENT where ID_HEBERGEMENT = :ID_HEBERGEMENT   ");
        query.bindValue(":ID_HEBERGEMENT",ID_HEBERGEMENT);
        query.exec();


            while(query.next()) {

            ui->id_hh->setText(query.value(0).toString());
             ui->nom_hh->setText(query.value(1).toString());
             ui->prix_hh->setText(query.value(2).toString());


}
}

void MainWindow::on_pb_ajouter_9_clicked()
{
    int ID_HEBERGEMENT = ui->comboBox_7->currentText().toInt();
    bool test=h.supprimer(ID_HEBERGEMENT);
    if(test){
        ui->tabhebergement->setModel(h.afficher());

        QMessageBox::information(nullptr, QObject::tr("Supprimer un Hebergement"),
                    QObject::tr("Hebergement supprimé.\n"
                                "Click Ok to exit."), QMessageBox::Ok);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Hebergement"),
                    QObject::tr("Erreur !.\n"
                                "Click Ok to exit."), QMessageBox::Ok);
}

void MainWindow::on_pushButton_234_clicked()
{
    QString ID_HEBERGEMENT = ui->recher1->currentText();
    ui->tabheb->setModel(h.chercher_Hebergement(ID_HEBERGEMENT));
}

void MainWindow::on_pushButton_78_clicked()
{
    ui->tabchambre->setModel(c.afficher_tri_ID());

}

void MainWindow::on_pushButton_180_clicked()
{
    ui->tabevenement->setModel(e.afficher_tri_ID());

}

void MainWindow::on_pushButton_233_clicked()
{
    ui->tabhebergement->setModel(h.afficher_tri_ID());

}
void MainWindow::makePlot(){

    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(90, 90, 90));
    gradient.setColorAt(0.38, QColor(105, 105, 105));
    gradient.setColorAt(1, QColor(70, 70, 70));
    ui->customPlot->setBackground(QBrush(gradient));

    // create empty bar chart objects:

    QCPBars *fossil = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    // gives more crisp, pixel aligned bar borders

    fossil->setAntialiased(false);

    fossil->setStackingGap(1);
    // set names and colors:
    fossil->setName("fidelite");
    fossil->setPen(QPen(QColor(100,149,237).lighter(170)));
    fossil->setBrush(QColor(100,149,237));

    // stack bars on top of each other:


    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
     QSqlQuery q;
    int i=0;
    q.exec("select TYPE from chambres order by NUM_CHAMBRE");
    while (q.next()) {
        QString adresse= q.value(0).toString();
        i++;
        ticks<<i;
        labels <<adresse;
    }
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->customPlot->xAxis->setTicker(textTicker);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTicks(false);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->setRange(0, 8);
    ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
    ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->customPlot->xAxis->setTickLabelColor(Qt::white);
    ui->customPlot->xAxis->setLabelColor(Qt::white);

    // prepare y axis:
    ui->customPlot->yAxis->setRange(0, 12.1);
    ui->customPlot->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot->yAxis->setLabel("Fidelite");
    ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
    ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
    ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    ui->customPlot->yAxis->setTickLabelColor(Qt::white);
    ui->customPlot->yAxis->setLabelColor(Qt::white);
    ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
    ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

 QVector<double> fossilData;
    QVector<double> tickss;

    int ii=0;
    q.exec("select NUM_CHAMBRE from chambres order by NUM_CHAMBRE ");
    while (q.next()) {
        int adresse= q.value(0).toInt();
        ii++;
        tickss<<ii;
        fossilData  <<adresse;
        fossil->setData(tickss, fossilData);
    }
    // Add data:






    // setup legend:
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
    ui->customPlot->legend->setBorderPen(Qt::NoPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);


}


void MainWindow::on_pushButton_440_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_458_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_457_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_456_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_455_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_454_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_453_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_452_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_451_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_450_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_449_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_448_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_447_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_446_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_445_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_444_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_443_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_442_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_441_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_254_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);

}

void MainWindow::on_pushButton_275_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);

}

void MainWindow::on_pushButton_429_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);

}

void MainWindow::on_pushButton_424_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);

}

void MainWindow::on_pushButton_411_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);

}

void MainWindow::on_pushButton_257_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);

}

void MainWindow::on_pushButton_235_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);

}

void MainWindow::on_pushButton_427_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);

}

void MainWindow::on_pushButton_418_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);

}

void MainWindow::on_pushButton_410_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);

}

void MainWindow::on_pushButton_259_clicked()
{
    ui->stackedWidget->setCurrentIndex(22);

}

void MainWindow::on_pushButton_267_clicked()
{
    ui->stackedWidget->setCurrentIndex(22);

}

void MainWindow::on_pushButton_272_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);

}

void MainWindow::on_pushButton_419_clicked()
{
    ui->stackedWidget->setCurrentIndex(22);

}

void MainWindow::on_pushButton_414_clicked()
{
    ui->stackedWidget->setCurrentIndex(22);

}

void MainWindow::on_pushButton_255_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);

}

void MainWindow::on_pushButton_264_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);

}

void MainWindow::on_pushButton_271_clicked()
{
    ui->stackedWidget->setCurrentIndex(22);

}

void MainWindow::on_pushButton_433_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);

}

void MainWindow::on_pushButton_412_clicked()
{
    ui->stackedWidget->setCurrentIndex(23);

}

void MainWindow::on_pushButton_253_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);

}

void MainWindow::on_pushButton_261_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);

}

void MainWindow::on_pushButton_273_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);

}

void MainWindow::on_pushButton_431_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);

}

void MainWindow::on_pushButton_426_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);

}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_143_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_153_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_167_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_174_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_177_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_195_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_197_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_200_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_203_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_206_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_238_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_246_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_252_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_262_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_270_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_432_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_420_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_417_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_29_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_63_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_71_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_86_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_193_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_198_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_201_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_204_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_207_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_249_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_258_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_263_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_265_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_30_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_69_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_72_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_87_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_144_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_158_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_166_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_175_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_178_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_236_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_256_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_269_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_268_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_428_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_434_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_422_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_421_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_416_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);

}

void MainWindow::on_pushButton_415_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);

}

void MainWindow::on_pushButton_439_clicked()
{

    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_435_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_436_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_437_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pushButton_438_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);

}

void MainWindow::on_pb_ajouter_10_clicked()
{


    int ID_SALLE = ui->ID_SALLE->text().toInt();
    int NBRE_SALLE = ui->NBRE_SALLE->text().toInt();
    QString DISPO_SALLE= ui->comboBox_3->currentText();


  salle s(ID_SALLE,NBRE_SALLE,DISPO_SALLE);
  bool testt=s.verifierId(ID_SALLE);

  if(testt)
  {
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une Salle"),
                  QObject::tr("déjà existant !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

    }
  else
  {
  bool test=s.ajouter();
  if(test)
{

      ui->tabsalle->setModel(s.afficher());
QMessageBox::information(nullptr, QObject::tr("Ajouter une Salle"),
                  QObject::tr("Salle ajouté.\n"
                              "Click Ok to exit."), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Salle"),
                  QObject::tr("Erreur !.\n"
                              "Click Ok to exit."), QMessageBox::Ok);
}

  QSqlQueryModel *model6 = new QSqlQueryModel;
  model6->setQuery("select ID_SALLE from SALLE");
  ui->comboBox_14->setModel(model6);


  QSqlQueryModel *model7 = new QSqlQueryModel;
  model7->setQuery("select ID_SALLE from SALLE");
  ui->rech123->setModel(model7);


  QSqlQueryModel *model8 = new QSqlQueryModel;
  model8->setQuery("select ID_SALLE from SALLE");
  ui->comboBox_17->setModel(model8);

  QSqlQueryModel *model9 = new QSqlQueryModel;
  model9->setQuery("select ID_SALLE from SALLE where DISPO_SALLE ='Oui' ");
  ui->comboBox_16->setModel(model9);
}

void MainWindow::on_pushButton_276_clicked()
{
    QSqlQuery query;

         int ID_SALLE = ui->ID_SALLE_2->text().toInt();
        query.prepare(" select * from SALLE where ID_SALLE = :ID_SALLE   ");
        query.bindValue(":ID_SALLE",ID_SALLE);
        query.exec();


            while(query.next()) {

            ui->ID_SALLE_2->setText(query.value(0).toString());
             ui->NBRE_SALLE_2->setText(query.value(1).toString());
            int index=ui->comboBox_13->findText(query.value(2).toString());
            ui->comboBox_13->setCurrentIndex(index);

}
}

void MainWindow::on_pb_ajouter_11_clicked()
{
    int ID_SALLE = ui->ID_SALLE_2->text().toInt();
    int NBRE_SALLE = ui->NBRE_SALLE_2->text().toInt();
    QString DISPO_SALLE= ui->comboBox_13->currentText();

     salle s;
       bool test;
       test=s.modifier(ID_SALLE,NBRE_SALLE,DISPO_SALLE);
       if(test)
       {
           ui->tabsalle->setModel(s.afficher());

          QMessageBox::information(nullptr,QObject::tr("modifier salle"),
            QObject::tr(" Salle modifer") ,QMessageBox::Cancel);

          QSqlQueryModel *model6 = new QSqlQueryModel;
          model6->setQuery("select ID_SALLE from SALLE");
          ui->comboBox_14->setModel(model6);


          QSqlQueryModel *model7 = new QSqlQueryModel;
          model7->setQuery("select ID_SALLE from SALLE");
          ui->rech123->setModel(model7);

          QSqlQueryModel *model8 = new QSqlQueryModel;
          model8->setQuery("select ID_SALLE from SALLE");
          ui->comboBox_17->setModel(model8);

          QSqlQueryModel *model9 = new QSqlQueryModel;
          model9->setQuery("select ID_SALLE from SALLE where DISPO_SALLE ='Oui' ");
          ui->comboBox_16->setModel(model9);
         }else

             QMessageBox::critical(nullptr,QObject::tr("modifier salle"),
               QObject::tr("Erreur !.\n""Click Ok to exit."), QMessageBox::Ok);

}

void MainWindow::on_pb_ajouter_20_clicked()
{
    int ID_SALLE = ui->comboBox_14->currentText().toInt();
    bool test=s.supprimer(ID_SALLE);
    if(test)
    {ui->tabsalle->setModel(s.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un salle"),
                    QObject::tr("Salle supprimé.\n"
                                "Click Ok to exit."), QMessageBox::Ok);

        QSqlQueryModel *model6 = new QSqlQueryModel;
        model6->setQuery("select ID_SALLE from SALLE");
        ui->comboBox_14->setModel(model6);


        QSqlQueryModel *model7 = new QSqlQueryModel;
        model7->setQuery("select ID_SALLE from SALLE");
        ui->rech123->setModel(model7);

        QSqlQueryModel *model8 = new QSqlQueryModel;
        model8->setQuery("select ID_SALLE from SALLE");
        ui->comboBox_17->setModel(model8);

        QSqlQueryModel *model9 = new QSqlQueryModel;
        model9->setQuery("select ID_SALLE from SALLE where DISPO_SALLE ='Oui' ");
        ui->comboBox_16->setModel(model9);    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un client"),
                    QObject::tr("Erreur !.\n"
                                "Click Ok to exit."), QMessageBox::Ok);

}

void MainWindow::on_pushButton_413_clicked()
{
    QString ID_SALLE = ui->rech123->currentText();
    ui->tabsallee->setModel(s.chercher_salle(ID_SALLE));
}

void MainWindow::on_pushButton_113_clicked()
{

}

void MainWindow::on_pushButton_112_clicked()
{
    ui->tabsalle->setModel(c.afficher_tri_ID());

}
