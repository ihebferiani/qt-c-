#-------------------------------------------------
#
# Project created by QtCreator 2020-02-27T13:49:08
#
#-------------------------------------------------

QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport network
QT +=charts
QT += printsupport
TARGET = menu
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    connexion.cpp \
    produit.cpp \
    nomen.cpp \
    menus.cpp \
    bonf.cpp \
    boni.cpp \
    fourn.cpp \
    piechartwidget.cpp \
    dialog.cpp \
    statistique.cpp \
    statistique2.cpp \
    login.cpp \
    prog.cpp

HEADERS += \
        menu.h \
    connexion.h \
    produit.h \
    nomen.h \
    menus.h \
    bonf.h \
    boni.h \
    fourn.h \
    piechartwidget.h \
    dialog.h \
    statistique2.h \
    statistique.h \
    login.h \
    prog.h

FORMS += \
    dialog.ui \
    statistique.ui \
    prog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    ../ajout-menu/ajout-menu.pro

RESOURCES += \
    img.qrc

DISTFILES += \
    img/500_F_232634055_nsd24iXrNY8eRpc9oJJu4YHPFLmDmYWP.jpg \
    img/2700165_4275d.jpg \
    img/37277382-menu-nourriture-plat-icône-du-bouton-carré-bleu.jpg \
    img/aaa.jpg \
    img/eez.jpg \
    img/food-plate-icon-special-cyan-blue-square-button-isolated-reflected-abstract-illustration-90193042.jpg \
    img/rest.jpg \
    img/rrr.jpg \
    img/th.jpg \
    img/tt.jpg \
    img/1.png \
    img/8774 - Copy.png \
    img/8774.png \
    img/95328977_251759359230590_3950026510974320640_n.png \
    img/aa.png \
    img/back.png \
    img/backback.png \
    img/bg.png \
    img/ee.png \
    img/facture.png \
    img/ff.png \
    img/icon-afficher2.png \
    img/icon-ajout2.png \
    img/icon-class.png \
    img/icon-modif2 (1).png \
    img/icon-stat.png \
    img/icon-supp2 (1).png \
    img/images.png \
    img/kindpng_5047621.png \
    img/Red.svg.png \
    img/refresh.png \
    img/refresh_copy.png \
    img/selected.png \
    img/selected2.png \
    img/stat.png
