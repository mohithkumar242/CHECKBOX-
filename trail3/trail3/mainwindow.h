#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_checkBox_bold_clicked();

    void on_checkBox_italic_clicked();

    void on_radioButton_left_clicked();

    void on_radioButton_center_clicked();

    void on_radioButton_right_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H