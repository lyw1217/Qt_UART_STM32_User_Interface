#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double dht_value_i = 0;
    double dht_value_d = 0;
    int i = 0, j = 0;

    void addPoint(double x, double y);   // Add
    void clearData();    // Add
    void plot();   // Add
    void send_Data_Array(QByteArray _send_Data);

public slots:
    void serial_connect();
    void serial_rescan();
    void serial_received();

private slots:
    void on_pushButton_send_clicked();
    void on_pushButton_scan_clicked();
    void on_pushButton_close_clicked();
    void on_horizontalSlider_led_valueChanged(int value);
    void on_horizontalSlider_servo_valueChanged(int value);
    void on_dial_valueChanged(int value);
    void on_pushButton_clicked();
    void on_pushButton_zoom_clicked();
    void on_pushButton_plot_add_clicked();
    void on_pushButton_plot_clear_clicked();

    void on_pushButton_start_clicked();

private:
    Ui::MainWindow *ui;
    QVector<double> qv_x, qv_y;   // Add
};

#endif // MAINWINDOW_H
