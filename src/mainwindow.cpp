#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

#include <QDebug>
extern void setLanguage(int lan);//全局函数，可供其他文件调用

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText (tr("Hello")); //transed ok
    pD = new Dialog(this);
    pD->hide ();

    qDebug()<< tr("Inten");//transed ok
    qDebug()<< tr("Inten...;");//not transed
    qDebug()<< tr("Inten=2.6;");//not transed

    QString str1 = tr("Inten");
    QString str2 = "=2.6;";
    qDebug()<< str1+str2;//transed ok
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    pD->show ();
}

void MainWindow::on_TransButto_clicked()
{
    static int i=1;
    setLanguage(i);
    i++;
    if(i>3)i=1;

    ui->pushButton->setText(tr("Speed"));
    ui->label->setText(tr("Inten"));
    ui->lineEdit->setText (tr("Hello")); //transed ok
    this->setWindowTitle(tr("MainWindow"));
    //emit(Trans SIG);
}
