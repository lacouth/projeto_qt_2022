#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <limits>
#include <QMainWindow>
#include <QMessageBox>
#include <string>
#include <map>
#include "filme.h"

#include <iostream>

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


    void on_btn_gerar_clicked();

    void on_btn_cadastrar_clicked();

private:
    Ui::MainWindow *ui;
    std::map<QString,Filme> cadastro;
    Filme filme;

};
#endif // MAINWINDOW_H
