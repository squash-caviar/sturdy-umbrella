/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEditName;
    QLineEdit *lineEditYear;
    QLineEdit *lineEditID;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *allDataViewButton;
    QPushButton *filterData2Button;
    QPushButton *filterDataButton;
    QPushButton *pushButtonRem;
    QPushButton *pushButtonAdd;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(463, 327);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEditName = new QLineEdit(centralWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(330, 50, 113, 32));
        lineEditYear = new QLineEdit(centralWidget);
        lineEditYear->setObjectName(QString::fromUtf8("lineEditYear"));
        lineEditYear->setGeometry(QRect(330, 120, 113, 32));
        lineEditID = new QLineEdit(centralWidget);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setGeometry(QRect(330, 230, 113, 32));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 301, 221));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 20, 56, 18));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 90, 56, 18));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 200, 56, 18));
        allDataViewButton = new QPushButton(centralWidget);
        allDataViewButton->setObjectName(QString::fromUtf8("allDataViewButton"));
        allDataViewButton->setGeometry(QRect(10, 250, 101, 34));
        filterData2Button = new QPushButton(centralWidget);
        filterData2Button->setObjectName(QString::fromUtf8("filterData2Button"));
        filterData2Button->setGeometry(QRect(220, 250, 84, 34));
        filterDataButton = new QPushButton(centralWidget);
        filterDataButton->setObjectName(QString::fromUtf8("filterDataButton"));
        filterDataButton->setGeometry(QRect(130, 250, 84, 34));
        pushButtonRem = new QPushButton(centralWidget);
        pushButtonRem->setObjectName(QString::fromUtf8("pushButtonRem"));
        pushButtonRem->setGeometry(QRect(330, 280, 111, 34));
        pushButtonAdd = new QPushButton(centralWidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(330, 160, 111, 34));
        QFont font;
        font.setPointSize(9);
        pushButtonAdd->setFont(font);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Year", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "ID", 0, QApplication::UnicodeUTF8));
        allDataViewButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\262\321\201\321\221", 0, QApplication::UnicodeUTF8));
        filterData2Button->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264 < 2001", 0, QApplication::UnicodeUTF8));
        filterDataButton->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264 > 2000", 0, QApplication::UnicodeUTF8));
        pushButtonRem->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
