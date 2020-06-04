#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "evenement.h"
#include "salle.h"

#include "chambre.h"
#include "hebergement.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_74_clicked();

    void on_pushButton_76_clicked();

    void on_pushButton_77_clicked();

    void on_pushButton_73_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_85_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_84_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_83_clicked();

    void on_pushButton_148_clicked();

    void on_pushButton_150_clicked();

    void on_pushButton_149_clicked();

    void on_pushButton_146_clicked();

    void on_pushButton_147_clicked();

    void on_pushButton_159_clicked();

    void on_pushButton_169_clicked();

    void on_pushButton_181_clicked();

    void on_pushButton_187_clicked();

    void on_pushButton_191_clicked();

    void on_pushButton_185_clicked();

    void on_pushButton_171_clicked();

    void on_pushButton_163_clicked();

    void on_pushButton_162_clicked();

    void on_pushButton_170_clicked();

    void on_pushButton_182_clicked();

    void on_pushButton_188_clicked();

    void on_pushButton_190_clicked();

    void on_pushButton_168_clicked();

    void on_pushButton_160_clicked();

    void on_pushButton_161_clicked();

    void on_pushButton_172_clicked();

    void on_pushButton_183_clicked();

    void on_pushButton_145_clicked();

    void on_pushButton_151_clicked();

    void on_pushButton_165_clicked();

    void on_pushButton_173_clicked();

    void on_pushButton_176_clicked();

    void on_pushButton_217_clicked();

    void on_pushButton_222_clicked();

    void on_pushButton_227_clicked();

    void on_pushButton_232_clicked();

    void on_pushButton_230_clicked();

    void on_pushButton_225_clicked();

    void on_pushButton_220_clicked();

    void on_pushButton_210_clicked();

    void on_pushButton_208_clicked();

    void on_pushButton_213_clicked();

    void on_pushButton_223_clicked();

    void on_pushButton_228_clicked();

    void on_pushButton_229_clicked();

    void on_pushButton_219_clicked();

    void on_pushButton_214_clicked();

    void on_pushButton_209_clicked();

    void on_pushButton_211_clicked();

    void on_pushButton_216_clicked();

    void on_pushButton_221_clicked();

    void on_pushButton_226_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_240_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_242_clicked();

    void on_pushButton_239_clicked();

    void on_pushButton_237_clicked();

    void on_pushButton_248_clicked();

    void on_pushButton_243_clicked();

    void on_pushButton_250_clicked();

    void on_pushButton_247_clicked();

    void on_pushButton_245_clicked();

    void on_pushButton_244_clicked();

    void on_pushButton_194_clicked();

    void on_pushButton_196_clicked();

    void on_pushButton_199_clicked();

    void on_pushButton_202_clicked();

    void on_pushButton_205_clicked();

    void on_pushButton_145_released();

    void on_pushButton_194_released();

    void on_pushButton_196_released();

    void on_pushButton_199_released();

    void on_pushButton_202_released();

    void on_pushButton_205_released();

    void on_pushButton_241_released();

    void on_pushButton_244_released();

    void on_pushButton_241_clicked();

    void on_pb_ajouter_clicked();

    void on_pb_ajouter_4_clicked();

    void on_pushButton_33_clicked();

    void on_supprimer_clicked();

    void on_rechh_clicked();

    void on_pb_ajouter_5_clicked();

    void on_pb_ajouter_6_clicked();

    void on_pushButton_164_clicked();

    void on_supprimer_3_clicked();

    void on_pushButton_192_clicked();

    void on_pb_ajouter_7_clicked();

    void on_pb_ajouter_8_clicked();

    void on_pushButton_251_clicked();

    void on_pb_ajouter_9_clicked();

    void on_pushButton_234_clicked();

    void on_pushButton_78_clicked();

    void on_pushButton_180_clicked();

    void on_pushButton_233_clicked();

    void makePlot();
    void on_pushButton_440_clicked();

    void on_pushButton_458_clicked();

    void on_pushButton_457_clicked();

    void on_pushButton_456_clicked();

    void on_pushButton_455_clicked();

    void on_pushButton_454_clicked();

    void on_pushButton_453_clicked();

    void on_pushButton_452_clicked();

    void on_pushButton_451_clicked();

    void on_pushButton_450_clicked();

    void on_pushButton_449_clicked();

    void on_pushButton_448_clicked();

    void on_pushButton_447_clicked();

    void on_pushButton_446_clicked();

    void on_pushButton_445_clicked();

    void on_pushButton_444_clicked();

    void on_pushButton_443_clicked();

    void on_pushButton_442_clicked();

    void on_pushButton_441_clicked();

    void on_pushButton_254_clicked();

    void on_pushButton_275_clicked();

    void on_pushButton_429_clicked();

    void on_pushButton_424_clicked();

    void on_pushButton_411_clicked();

    void on_pushButton_257_clicked();

    void on_pushButton_235_clicked();

    void on_pushButton_427_clicked();

    void on_pushButton_418_clicked();

    void on_pushButton_410_clicked();

    void on_pushButton_259_clicked();

    void on_pushButton_267_clicked();

    void on_pushButton_272_clicked();

    void on_pushButton_419_clicked();

    void on_pushButton_414_clicked();

    void on_pushButton_255_clicked();

    void on_pushButton_264_clicked();

    void on_pushButton_271_clicked();

    void on_pushButton_433_clicked();

    void on_pushButton_412_clicked();

    void on_pushButton_253_clicked();

    void on_pushButton_261_clicked();

    void on_pushButton_273_clicked();

    void on_pushButton_431_clicked();

    void on_pushButton_426_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_143_clicked();

    void on_pushButton_153_clicked();

    void on_pushButton_167_clicked();

    void on_pushButton_174_clicked();

    void on_pushButton_177_clicked();

    void on_pushButton_195_clicked();

    void on_pushButton_197_clicked();

    void on_pushButton_200_clicked();

    void on_pushButton_203_clicked();

    void on_pushButton_206_clicked();

    void on_pushButton_238_clicked();

    void on_pushButton_246_clicked();

    void on_pushButton_252_clicked();

    void on_pushButton_262_clicked();

    void on_pushButton_270_clicked();

    void on_pushButton_432_clicked();

    void on_pushButton_420_clicked();

    void on_pushButton_417_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_193_clicked();

    void on_pushButton_198_clicked();

    void on_pushButton_201_clicked();

    void on_pushButton_204_clicked();

    void on_pushButton_207_clicked();

    void on_pushButton_249_clicked();

    void on_pushButton_258_clicked();

    void on_pushButton_263_clicked();

    void on_pushButton_265_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_87_clicked();

    void on_pushButton_144_clicked();

    void on_pushButton_158_clicked();

    void on_pushButton_166_clicked();

    void on_pushButton_175_clicked();

    void on_pushButton_178_clicked();

    void on_pushButton_236_clicked();

    void on_pushButton_256_clicked();

    void on_pushButton_269_clicked();

    void on_pushButton_268_clicked();

    void on_pushButton_428_clicked();

    void on_pushButton_434_clicked();

    void on_pushButton_422_clicked();

    void on_pushButton_421_clicked();

    void on_pushButton_416_clicked();

    void on_pushButton_415_clicked();

    void on_pushButton_439_clicked();

    void on_pushButton_435_clicked();

    void on_pushButton_436_clicked();

    void on_pushButton_437_clicked();

    void on_pushButton_438_clicked();

    void on_pb_ajouter_10_clicked();

    void on_pushButton_276_clicked();

    void on_pb_ajouter_11_clicked();

    void on_pb_ajouter_20_clicked();

    void on_pushButton_413_clicked();

    void on_pushButton_113_clicked();

    void on_pushButton_112_clicked();

private:
    Ui::MainWindow *ui;
    chambre c;
    evenement e;
    Hebergement h;
    salle s;
};
#endif // MAINWINDOW_H
