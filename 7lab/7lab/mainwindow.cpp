#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::MainWindow)
{
ui->setupUi(this);
m_db = QSqlDatabase::addDatabase("QSQLITE");

m_db.setDatabaseName("myDB");
query = new QSqlQuery(m_db);
if(!m_db.open())
throw "can't open database";
if(!m_db.tables().contains("Person"))
{
query->clear();
query->exec("CREATE TABLE Person(ID INTEGER PRIMARY KEY, Name VARCHAR, Year INTEGER);");
query->clear();
query->exec("INSERT INTO Person (ID,Name,Year) VALUES (1,'Ann', 2000);");
query->clear();
query->exec("INSERT INTO Person (ID,Name,Year) VALUES (2,'Jim', 2003);");
}
model = new QSqlTableModel(this,m_db);

model->setTable("Person");
model->select();
model->setEditStrategy(QSqlTableModel::OnFieldChange);

ui->tableView->setModel(model);
}
MainWindow::~MainWindow()
{
delete ui;
delete query;
delete model;
}

void MainWindow::on_allDataViewButton_clicked()
{
model->setFilter("");
model->select();
ui->tableView->setModel(model);
QMessageBox::information(0,tr("Action"),tr("All data"));
}
void MainWindow::on_filterDataButton_clicked()
{
model->setFilter("Year>2000");
model->select();
ui->tableView->setModel(model);
QMessageBox::information(0,"Action","Filter");
}

void MainWindow::on_filterData2Button_clicked()
{
model->setFilter("Year<2001");
model->select();

ui->tableView->setModel(model);
}

void MainWindow::on_pushButtonAdd_clicked()
{
if(ui->lineEditName->text().isEmpty()||ui->lineEditYear->text().isEmpty()||ui->lineEditID->text().isEmpty())
return;
QString id = ui->lineEditID->text();
QString name = ui->lineEditName->text();
QString year = ui->lineEditYear->text();
QString buf = tr("INSERT INTO Person (ID,Name,Year) VALUES (")+id+tr(",'")
+name+tr("',")+year+tr(");");
query->clear();
query->exec(buf);
model->select();
}

void MainWindow::on_pushButtonRem_clicked()
{
if(ui->lineEditID->text().isEmpty())
return;
QString id = ui->lineEditID->text();
query->clear();
query->exec(tr("DELETE FROM Person WHERE ID=")+id);
model->select();
}


