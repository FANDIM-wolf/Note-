#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "note.h"
#include "note.cpp"
#include <QTextStream>
#include <QString>
#include <QtSql>
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


void MainWindow::on_pushButton_toggled(bool checked)
{

}


void MainWindow::on_pushButton_clicked()
{
    QString text;

    NoteTest();
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName("db_name.sqlite");
    if(sdb.open()){
        ui->label->setText("Data base ");
    }
}
