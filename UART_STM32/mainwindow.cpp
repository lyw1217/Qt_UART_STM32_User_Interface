#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qserialport.h>
#include <qserialportinfo.h>
#include <stdio.h>
#include <cstring>
#include <QDebug>

QSerialPort *serial;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);  // Add
    connect(ui->pushButton_open, SIGNAL(clicked()),this,SLOT(serial_connect()));
    connect(ui->pushButton_scan, SIGNAL(clicked()),this,SLOT(serial_rescan()));
    connect(serial, SIGNAL(readyRead()),this,SLOT(serial_received()));
    serial_rescan();   // Add

    // plot 구성
    ui->plot->setInteraction(QCP::iRangeDrag, true);   // Add
    ui->plot->setInteraction(QCP::iRangeZoom, true);   // Add
    ui->plot->addGraph();   // Add
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);  // Add 점 찍는 스타일 결정
    ui->plot->graph(0)->setLineStyle(QCPGraph::lsLine);  // Add 라인 스타일 결정
    ui->plot->yAxis->setLabel("Temp");     // Add
    ui->plot->xAxis->setLabel("Time(s)");  // Add
    ui->plot->yAxis->setRange(0.0, 40.0);  // Add
    connect(ui->plot, SIGNAL(mouseDoubleClick(QMouseEvent*)), SLOT(clickedGraph(QMouseEvent*)));   // Add
}

MainWindow::~MainWindow()
{
    delete ui;
    serial->close();
}
void MainWindow::serial_connect(){
    serial->setPortName(ui->comboBox_port->currentText());
    serial->setBaudRate(ui->comboBox_baud->currentText().toInt());
    serial->setDataBits((QSerialPort::DataBits)ui->comboBox_data->currentText().toInt());

    if(ui->comboBox_parity->currentText() == "Even"){
        serial->setParity(QSerialPort::EvenParity);
    }else if(ui->comboBox_parity->currentText() == "None"){
        serial->setParity(QSerialPort::NoParity);
    }else if(ui->comboBox_parity->currentText() == "Odd"){
        serial->setParity(QSerialPort::OddParity);
    }

    serial->setStopBits((QSerialPort::StopBits)ui->comboBox_stop->currentText().toInt());
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
    if(serial->isOpen()){
        qDebug() << "Open Port!";
        ui->textEdit_recv->clear();
        ui->textEdit_recv->append("open port");
        ui->pushButton_send->setEnabled(true);
        ui->pushButton_close->setEnabled(true);
        ui->pushButton_open->setEnabled(false);
        ui->comboBox_port->setEnabled(false);
        ui->pushButton_start->setEnabled(true);
        ui->pushButton_start->setText("Start");
    }else{
        qDebug() << "Not Open!";
        ui->textEdit_recv->clear();
        ui->textEdit_recv->append("not open port");
    }

}
void MainWindow::serial_rescan(){
    ui->comboBox_port->clear();
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        ui->comboBox_port->addItem(serialPortInfo.portName());
    }
}
void MainWindow::serial_received(){
    QByteArray received;

#if 0
    received = serial->readAll();
#else
    while (serial->canReadLine())
    {
        received = serial->readLine();
    }
#endif
    // [ti] = 온도 정수부 / [td] = 온도 소수부
    if(!strncmp(received,"[ti]", 4)){
        dht_value_i = received.mid(4,2).toDouble();
    }else if(!strncmp(received,"[td]", 4)){
        dht_value_d = received.mid(4,2).toDouble() / 10;

        // 소수점까지 값이 들어왔을 때 업데이트
        addPoint((i++ * 3), (dht_value_i+dht_value_d));
        if(i < 30){
            ui->plot->xAxis->setRange(0, i * 3 + 3);
        }else{
            ui->plot->xAxis->setRange(j++ * 3, i * 3 + 3);
        }
        plot();
        ui->lcdNumber_temp->display(dht_value_i + dht_value_d);
    }else if(!strcmp(received,"")){
        return;
    }else{
        ui->textEdit_recv->insertPlainText(received);
        ui->textEdit_recv->append("");
        ui->textEdit_recv->show();
    }



    qDebug() << "RECV : " << received;
}

void MainWindow::on_pushButton_send_clicked()
{
    send_Data_Array(ui->lineEdit_send->text().toUtf8().data());
}

void MainWindow::on_pushButton_scan_clicked()
{
    qDebug() << "Scan";
}

void MainWindow::on_pushButton_close_clicked()
{
    serial->close();
    if(!serial->isOpen()){
        ui->textEdit_recv->setText("Close Port");
        ui->pushButton_send->setEnabled(false);
        ui->pushButton_close->setEnabled(false);
        ui->pushButton_open->setEnabled(true);
        ui->comboBox_port->setEnabled(true);
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_start->setText("Start");
        qDebug() << "close port";
    }else{
        ui->textEdit_recv->setText("Fail close port");
    }
}

void MainWindow::on_pushButton_start_clicked()
{
    if(ui->pushButton_start->text() == "Start"){
        ui->pushButton_start->setText("Stop");
        send_Data_Array("start_flag=1");
    }else{
        ui->pushButton_start->setText("Start");
        send_Data_Array("start_flag=0");
    }
}

// 문자열 전송 함수
void MainWindow::send_Data_Array(QByteArray _send_Data){
    if(ui->checkBox_nl->isChecked()){
        _send_Data += "\n";
    }
    serial->write(_send_Data.data());
    qDebug() << "SEND : " << _send_Data;
}

/*------------------------------------------------------------*/
/*----------------------Plot Part start-----------------------*/
/*------------------------------------------------------------*/

void MainWindow::on_horizontalSlider_led_valueChanged(int value)
{
    ui->lcdNumber_led->display(QString::number(value));
}

void MainWindow::on_horizontalSlider_servo_valueChanged(int value)
{
    ui->lcdNumber_servo->display(QString::number(value));
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->lcdNumber_dial->display(QString::number(value));

    if(serial->isOpen()){
        QByteArray send_Data;
        send_Data = "[servo]" + QByteArray::number(value) + "\n";
        serial->write(send_Data.data());
        qDebug() << "SERVO : " << send_Data;
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit_recv->clear();
}

void MainWindow::addPoint(double x, double y)
{
    qv_x.append(x);   // Add
    qv_y.append(y);   // Add
}

void MainWindow::clearData()
{
    qv_x.clear();   // Add
    qv_y.clear();   // Add
}

void MainWindow::plot()
{
    ui->plot->graph(0)->setData(qv_x, qv_y);  //Add
    ui->plot->replot();  //Add
    ui->plot->update();  //Add
}

void MainWindow::on_pushButton_zoom_clicked()
{
    ui->plot->xAxis->setRange(*std::min_element(qv_x.begin(), qv_x.end()), *std::max_element(qv_x.begin(), qv_x.end()));  // Add
    ui->plot->yAxis->setRange(*std::min_element(qv_y.begin(), qv_y.end()), *std::max_element(qv_y.begin(), qv_y.end()));  // Add
    plot();  // Add
}

void MainWindow::on_pushButton_plot_add_clicked()
{
    addPoint(ui->bx_x->value(), ui->bx_y->value());   // Add
    plot();   // Add
}

void MainWindow::on_pushButton_plot_clear_clicked()
{
    clearData();    // Add
    ui->plot->yAxis->setRange(0.0, 40.0);  // Add
    ui->plot->xAxis->setRange(0.0, 9.0);  // Add
    ui->lcdNumber_temp->display("0");
    i = 0;
    j = 0;
    plot();         // Add
}

/*------------------------------------------------------------*/
/*------------------------Plot Part end-----------------------*/
/*------------------------------------------------------------*/
