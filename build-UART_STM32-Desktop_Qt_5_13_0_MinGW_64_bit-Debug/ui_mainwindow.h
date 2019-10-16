/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_title;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox_data;
    QComboBox *comboBox_stop;
    QLabel *label_parity;
    QComboBox *comboBox_port;
    QComboBox *comboBox_baud;
    QLabel *label_baud;
    QComboBox *comboBox_parity;
    QLabel *label_data;
    QLabel *label_port;
    QLabel *label_stop;
    QPushButton *pushButton_scan;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_recv;
    QLabel *label_recv;
    QPushButton *pushButton_send;
    QCheckBox *checkBox_nl;
    QLineEdit *lineEdit_send;
    QPushButton *pushButton;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QLabel *label_led;
    QLabel *label_servo;
    QLabel *label_pwm;
    QSlider *horizontalSlider_led;
    QSlider *horizontalSlider_servo;
    QLCDNumber *lcdNumber_servo;
    QLCDNumber *lcdNumber_led;
    QDial *dial;
    QLabel *label;
    QLCDNumber *lcdNumber_temp;
    QLabel *label_2;
    QLCDNumber *lcdNumber_dial;
    QCustomPlot *plot;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_zoom;
    QLabel *label_x;
    QSpinBox *bx_x;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_y;
    QSpinBox *bx_y;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_plot_add;
    QPushButton *pushButton_plot_clear;
    QPushButton *pushButton_start;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1303, 573);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(290, 10, 273, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 196, 295));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        layoutWidget->setFont(font1);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_data = new QComboBox(layoutWidget);
        comboBox_data->addItem(QString());
        comboBox_data->addItem(QString());
        comboBox_data->addItem(QString());
        comboBox_data->addItem(QString());
        comboBox_data->setObjectName(QString::fromUtf8("comboBox_data"));
        comboBox_data->setFont(font1);

        gridLayout->addWidget(comboBox_data, 4, 1, 1, 1);

        comboBox_stop = new QComboBox(layoutWidget);
        comboBox_stop->addItem(QString());
        comboBox_stop->addItem(QString());
        comboBox_stop->setObjectName(QString::fromUtf8("comboBox_stop"));
        comboBox_stop->setFont(font1);

        gridLayout->addWidget(comboBox_stop, 5, 1, 1, 1);

        label_parity = new QLabel(layoutWidget);
        label_parity->setObjectName(QString::fromUtf8("label_parity"));
        label_parity->setFont(font1);

        gridLayout->addWidget(label_parity, 6, 0, 1, 1);

        comboBox_port = new QComboBox(layoutWidget);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setFont(font1);

        gridLayout->addWidget(comboBox_port, 0, 1, 1, 1);

        comboBox_baud = new QComboBox(layoutWidget);
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QString::fromUtf8("comboBox_baud"));
        comboBox_baud->setFont(font1);
        comboBox_baud->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(comboBox_baud, 3, 1, 1, 1);

        label_baud = new QLabel(layoutWidget);
        label_baud->setObjectName(QString::fromUtf8("label_baud"));
        label_baud->setFont(font1);

        gridLayout->addWidget(label_baud, 3, 0, 1, 1);

        comboBox_parity = new QComboBox(layoutWidget);
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->addItem(QString());
        comboBox_parity->setObjectName(QString::fromUtf8("comboBox_parity"));
        comboBox_parity->setFont(font1);

        gridLayout->addWidget(comboBox_parity, 6, 1, 1, 1);

        label_data = new QLabel(layoutWidget);
        label_data->setObjectName(QString::fromUtf8("label_data"));
        label_data->setFont(font1);

        gridLayout->addWidget(label_data, 4, 0, 1, 1);

        label_port = new QLabel(layoutWidget);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setFont(font1);

        gridLayout->addWidget(label_port, 0, 0, 1, 1);

        label_stop = new QLabel(layoutWidget);
        label_stop->setObjectName(QString::fromUtf8("label_stop"));
        label_stop->setFont(font1);

        gridLayout->addWidget(label_stop, 5, 0, 1, 1);

        pushButton_scan = new QPushButton(layoutWidget);
        pushButton_scan->setObjectName(QString::fromUtf8("pushButton_scan"));
        pushButton_scan->setFont(font1);

        gridLayout->addWidget(pushButton_scan, 12, 0, 1, 2);

        pushButton_open = new QPushButton(layoutWidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setFont(font1);

        gridLayout->addWidget(pushButton_open, 9, 0, 1, 1);

        pushButton_close = new QPushButton(layoutWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setEnabled(false);

        gridLayout->addWidget(pushButton_close, 9, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(230, 70, 611, 291));
        layoutWidget1->setFont(font1);
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit_recv = new QTextEdit(layoutWidget1);
        textEdit_recv->setObjectName(QString::fromUtf8("textEdit_recv"));
        textEdit_recv->setFont(font1);
        textEdit_recv->setFocusPolicy(Qt::StrongFocus);
        textEdit_recv->setReadOnly(false);
        textEdit_recv->setOverwriteMode(false);

        gridLayout_2->addWidget(textEdit_recv, 4, 0, 1, 4);

        label_recv = new QLabel(layoutWidget1);
        label_recv->setObjectName(QString::fromUtf8("label_recv"));
        label_recv->setFont(font1);

        gridLayout_2->addWidget(label_recv, 2, 0, 1, 2);

        pushButton_send = new QPushButton(layoutWidget1);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setEnabled(false);
        pushButton_send->setFont(font1);

        gridLayout_2->addWidget(pushButton_send, 0, 3, 1, 1);

        checkBox_nl = new QCheckBox(layoutWidget1);
        checkBox_nl->setObjectName(QString::fromUtf8("checkBox_nl"));
        checkBox_nl->setChecked(true);

        gridLayout_2->addWidget(checkBox_nl, 2, 2, 1, 1);

        lineEdit_send = new QLineEdit(layoutWidget1);
        lineEdit_send->setObjectName(QString::fromUtf8("lineEdit_send"));
        lineEdit_send->setFont(font1);

        gridLayout_2->addWidget(lineEdit_send, 0, 0, 1, 3);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 3, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 370, 509, 102));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        layoutWidget2->setFont(font2);
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(7);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_led = new QLabel(layoutWidget2);
        label_led->setObjectName(QString::fromUtf8("label_led"));
        label_led->setFont(font2);

        gridLayout_3->addWidget(label_led, 0, 1, 1, 1);

        label_servo = new QLabel(layoutWidget2);
        label_servo->setObjectName(QString::fromUtf8("label_servo"));
        label_servo->setFont(font2);

        gridLayout_3->addWidget(label_servo, 1, 1, 1, 1);

        label_pwm = new QLabel(layoutWidget2);
        label_pwm->setObjectName(QString::fromUtf8("label_pwm"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Consolas"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_pwm->setFont(font3);

        gridLayout_3->addWidget(label_pwm, 0, 0, 2, 1);

        horizontalSlider_led = new QSlider(layoutWidget2);
        horizontalSlider_led->setObjectName(QString::fromUtf8("horizontalSlider_led"));
        horizontalSlider_led->setFont(font2);
        horizontalSlider_led->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_led, 0, 2, 1, 1);

        horizontalSlider_servo = new QSlider(layoutWidget2);
        horizontalSlider_servo->setObjectName(QString::fromUtf8("horizontalSlider_servo"));
        horizontalSlider_servo->setFont(font2);
        horizontalSlider_servo->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_servo, 1, 2, 1, 1);

        lcdNumber_servo = new QLCDNumber(layoutWidget2);
        lcdNumber_servo->setObjectName(QString::fromUtf8("lcdNumber_servo"));
        lcdNumber_servo->setFrameShape(QFrame::NoFrame);
        lcdNumber_servo->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_servo, 1, 3, 1, 1);

        lcdNumber_led = new QLCDNumber(layoutWidget2);
        lcdNumber_led->setObjectName(QString::fromUtf8("lcdNumber_led"));
        lcdNumber_led->setFrameShape(QFrame::NoFrame);
        lcdNumber_led->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_led, 0, 3, 1, 1);

        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(520, 380, 180, 129));
        dial->setWrapping(true);
        dial->setNotchesVisible(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(780, 380, 31, 16));
        label->setFont(font2);
        lcdNumber_temp = new QLCDNumber(centralWidget);
        lcdNumber_temp->setObjectName(QString::fromUtf8("lcdNumber_temp"));
        lcdNumber_temp->setGeometry(QRect(730, 390, 91, 71));
        lcdNumber_temp->setFrameShape(QFrame::NoFrame);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(820, 420, 64, 15));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Consolas"));
        font4.setPointSize(11);
        label_2->setFont(font4);
        lcdNumber_dial = new QLCDNumber(centralWidget);
        lcdNumber_dial->setObjectName(QString::fromUtf8("lcdNumber_dial"));
        lcdNumber_dial->setGeometry(QRect(640, 370, 73, 129));
        lcdNumber_dial->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_dial->setFrameShape(QFrame::NoFrame);
        lcdNumber_dial->setSmallDecimalPoint(false);
        lcdNumber_dial->setDigitCount(5);
        lcdNumber_dial->setSegmentStyle(QLCDNumber::Filled);
        plot = new QCustomPlot(centralWidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(870, 70, 411, 361));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(860, 440, 434, 34));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_zoom = new QPushButton(layoutWidget3);
        pushButton_zoom->setObjectName(QString::fromUtf8("pushButton_zoom"));

        horizontalLayout->addWidget(pushButton_zoom);

        label_x = new QLabel(layoutWidget3);
        label_x->setObjectName(QString::fromUtf8("label_x"));

        horizontalLayout->addWidget(label_x);

        bx_x = new QSpinBox(layoutWidget3);
        bx_x->setObjectName(QString::fromUtf8("bx_x"));

        horizontalLayout->addWidget(bx_x);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_y = new QLabel(layoutWidget3);
        label_y->setObjectName(QString::fromUtf8("label_y"));

        horizontalLayout_2->addWidget(label_y);

        bx_y = new QSpinBox(layoutWidget3);
        bx_y->setObjectName(QString::fromUtf8("bx_y"));

        horizontalLayout_2->addWidget(bx_y);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_plot_add = new QPushButton(layoutWidget3);
        pushButton_plot_add->setObjectName(QString::fromUtf8("pushButton_plot_add"));

        horizontalLayout_4->addWidget(pushButton_plot_add);

        pushButton_plot_clear = new QPushButton(layoutWidget3);
        pushButton_plot_clear->setObjectName(QString::fromUtf8("pushButton_plot_clear"));

        horizontalLayout_4->addWidget(pushButton_plot_clear);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setEnabled(false);
        pushButton_start->setGeometry(QRect(792, 450, 41, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1303, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        comboBox_data->setCurrentIndex(3);
        comboBox_baud->setCurrentIndex(3);
        comboBox_parity->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "QT UART STM32 User Interface Program", nullptr));
        comboBox_data->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_data->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_data->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_data->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        comboBox_stop->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_stop->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_parity->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        comboBox_baud->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        comboBox_baud->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        comboBox_baud->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        comboBox_baud->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_baud->setItemText(4, QCoreApplication::translate("MainWindow", "14400", nullptr));
        comboBox_baud->setItemText(5, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboBox_baud->setItemText(6, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_baud->setItemText(7, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBox_baud->setItemText(8, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_baud->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        comboBox_parity->setItemText(0, QCoreApplication::translate("MainWindow", "Even", nullptr));
        comboBox_parity->setItemText(1, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_parity->setItemText(2, QCoreApplication::translate("MainWindow", "Odd", nullptr));

        label_data->setText(QCoreApplication::translate("MainWindow", "Data bits", nullptr));
        label_port->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_stop->setText(QCoreApplication::translate("MainWindow", "Stop bits", nullptr));
        pushButton_scan->setText(QCoreApplication::translate("MainWindow", "Scan", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label_recv->setText(QCoreApplication::translate("MainWindow", "Recv", nullptr));
        pushButton_send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        checkBox_nl->setText(QCoreApplication::translate("MainWindow", "NL", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_led->setText(QCoreApplication::translate("MainWindow", "LED", nullptr));
        label_servo->setText(QCoreApplication::translate("MainWindow", "SERVO", nullptr));
        label_pwm->setText(QCoreApplication::translate("MainWindow", "PWM \354\240\234\354\226\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TEMP", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\342\204\203", nullptr));
        pushButton_zoom->setText(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
        label_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButton_plot_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_plot_clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
