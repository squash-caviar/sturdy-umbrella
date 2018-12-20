#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
explicit MainWindow(QWidget *parent = 0);
~MainWindow();
private slots:
void on_allDataViewButton_clicked();
void on_filterDataButton_clicked();
void on_filterData2Button_clicked();
void on_pushButtonAdd_clicked();
void on_pushButtonRem_clicked();



private:
Ui::MainWindow *ui;
QSqlDatabase m_db;
QSqlQuery* query;
QSqlTableModel* model;
};
#endif
