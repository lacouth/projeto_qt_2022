#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btn_gerar_clicked()
{
    QString temp;
    temp = ui->input_titulo->text();
    if(filme.setTitulo(temp) == false){
        QMessageBox::information(this,"Cadastro","Título Inválido");
        return;
    }

    temp = ui->input_diretor->text();
    if(filme.setDiretor(temp)==false){
        QMessageBox::information(this,"Cadastro","Diretor Inválido");
        return;
    }

    int ano = ui->input_ano->text().toInt();

    if(filme.setAno(ano)==false){
        QMessageBox::information(this,"Cadastro","Ano Inválido");
        return;
    }

    temp = ui->input_genero->currentText();
    filme.setGenero(temp);

    double valor = ui->input_valor->value();
    if(filme.setValor(valor)==false){
        QMessageBox::information(this,"Cadastro","Preço Inválido");
        return;
    }

    temp = ui->input_idioma->text();
    if(filme.setIdioma(temp)==false){
        QMessageBox::information(this,"Cadastro","Idioma Inválido");
        return;
    }

    temp = filme.gerar_codigo();
    ui->input_cod->setText(temp);

    QMessageBox::information(this,"Cadastro","Confira todas as informações e clique em cadastrar!");

    ui->btn_cadastrar->setEnabled(true);


}


void MainWindow::on_btn_cadastrar_clicked()
{
    cadastro[filme.getCodigo()] = filme;
    QMessageBox::information(this,"Cadastro","Filme Cadastrado com Sucesso");
}

