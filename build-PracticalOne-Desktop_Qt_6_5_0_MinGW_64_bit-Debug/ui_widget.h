/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tablecalendar;
    QComboBox *mesNow;
    QPushButton *buttonAtras;
    QLabel *labelMonth;
    QSpinBox *spinBoxAnio;
    QLabel *labelYear;
    QPushButton *buttonNextMonth;
    QFrame *frame;
    QPushButton *buttonMenu;
    QCommandLinkButton *crearEvento;
    QPushButton *ButtonDeleteEvent;
    QPushButton *buttonExit;
    QTableView *TableBase;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(731, 562);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tablecalendar = new QTableWidget(Widget);
        tablecalendar->setObjectName("tablecalendar");
        tablecalendar->setGeometry(QRect(140, 110, 581, 371));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tablecalendar->sizePolicy().hasHeightForWidth());
        tablecalendar->setSizePolicy(sizePolicy);
        tablecalendar->setMaximumSize(QSize(16777215, 16777215));
        mesNow = new QComboBox(Widget);
        mesNow->setObjectName("mesNow");
        mesNow->setGeometry(QRect(450, 200, 121, 51));
        sizePolicy.setHeightForWidth(mesNow->sizePolicy().hasHeightForWidth());
        mesNow->setSizePolicy(sizePolicy);
        buttonAtras = new QPushButton(Widget);
        buttonAtras->setObjectName("buttonAtras");
        buttonAtras->setGeometry(QRect(270, 210, 62, 56));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/flechaRetroceder.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAtras->setIcon(icon);
        buttonAtras->setIconSize(QSize(50, 50));
        buttonAtras->setFlat(true);
        labelMonth = new QLabel(Widget);
        labelMonth->setObjectName("labelMonth");
        labelMonth->setGeometry(QRect(350, 180, 22, 16));
        spinBoxAnio = new QSpinBox(Widget);
        spinBoxAnio->setObjectName("spinBoxAnio");
        spinBoxAnio->setGeometry(QRect(570, 210, 91, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxAnio->sizePolicy().hasHeightForWidth());
        spinBoxAnio->setSizePolicy(sizePolicy1);
        labelYear = new QLabel(Widget);
        labelYear->setObjectName("labelYear");
        labelYear->setGeometry(QRect(400, 240, 22, 16));
        buttonNextMonth = new QPushButton(Widget);
        buttonNextMonth->setObjectName("buttonNextMonth");
        buttonNextMonth->setGeometry(QRect(530, 290, 62, 56));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/flechaAvanzar (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonNextMonth->setIcon(icon1);
        buttonNextMonth->setIconSize(QSize(50, 50));
        buttonNextMonth->setFlat(true);
        frame = new QFrame(Widget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 131, 571));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 55, 71);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        buttonMenu = new QPushButton(frame);
        buttonMenu->setObjectName("buttonMenu");
        buttonMenu->setGeometry(QRect(0, 20, 83, 46));
        buttonMenu->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMenu->setIcon(icon2);
        buttonMenu->setIconSize(QSize(40, 40));
        buttonMenu->setFlat(true);
        crearEvento = new QCommandLinkButton(frame);
        crearEvento->setObjectName("crearEvento");
        crearEvento->setGeometry(QRect(0, 90, 121, 81));
        crearEvento->setAutoFillBackground(false);
        crearEvento->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 11pt \"Arial\";"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/icono2.png"), QSize(), QIcon::Normal, QIcon::Off);
        crearEvento->setIcon(icon3);
        crearEvento->setIconSize(QSize(40, 40));
        crearEvento->setAutoDefault(false);
        ButtonDeleteEvent = new QPushButton(frame);
        ButtonDeleteEvent->setObjectName("ButtonDeleteEvent");
        ButtonDeleteEvent->setGeometry(QRect(10, 340, 80, 24));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/imgDelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonDeleteEvent->setIcon(icon4);
        ButtonDeleteEvent->setIconSize(QSize(40, 40));
        ButtonDeleteEvent->setFlat(true);
        buttonExit = new QPushButton(frame);
        buttonExit->setObjectName("buttonExit");
        buttonExit->setGeometry(QRect(20, 530, 80, 24));
        TableBase = new QTableView(Widget);
        TableBase->setObjectName("TableBase");
        TableBase->setGeometry(QRect(310, 380, 831, 161));
        QWidget::setTabOrder(tablecalendar, ButtonDeleteEvent);
        QWidget::setTabOrder(ButtonDeleteEvent, mesNow);
        QWidget::setTabOrder(mesNow, spinBoxAnio);
        QWidget::setTabOrder(spinBoxAnio, buttonNextMonth);
        QWidget::setTabOrder(buttonNextMonth, buttonAtras);
        QWidget::setTabOrder(buttonAtras, crearEvento);
        QWidget::setTabOrder(crearEvento, buttonMenu);
        QWidget::setTabOrder(buttonMenu, buttonExit);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        buttonAtras->setText(QString());
        labelMonth->setText(QCoreApplication::translate("Widget", "Mes", nullptr));
        labelYear->setText(QCoreApplication::translate("Widget", "A\303\261o", nullptr));
        buttonNextMonth->setText(QString());
        buttonMenu->setText(QCoreApplication::translate("Widget", "Menu", nullptr));
        crearEvento->setText(QString());
        ButtonDeleteEvent->setText(QString());
        buttonExit->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
