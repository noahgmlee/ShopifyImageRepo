/********************************************************************************
** Form generated from reading UI file 'mainapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPP_H
#define UI_MAINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainApp
{
public:
    QPushButton *add;
    QPushButton *search;
    QLineEdit *search_desc;
    QLineEdit *add_file;
    QLineEdit *add_name;
    QLineEdit *add_descriptor;
    QPushButton *delete_2;
    QLineEdit *add_price;
    QLineEdit *delete_name;
    QPushButton *deposit;
    QLineEdit *deposit_amt;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *gridLayoutWidget;
    QGridLayout *yourproducts;
    QWidget *gridLayoutWidget_2;
    QGridLayout *products;
    QPushButton *next_user;
    QPushButton *next_prod;
    QLabel *label_9;
    QLineEdit *balance;
    QPushButton *pushButton;
    QLineEdit *cost;
    QLineEdit *sellerid;
    QLineEdit *prodname;
    QPushButton *logout;

    void setupUi(QDialog *mainApp)
    {
        if (mainApp->objectName().isEmpty())
            mainApp->setObjectName(QString::fromUtf8("mainApp"));
        mainApp->resize(638, 481);
        add = new QPushButton(mainApp);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(40, 30, 113, 32));
        search = new QPushButton(mainApp);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(450, 150, 113, 32));
        search_desc = new QLineEdit(mainApp);
        search_desc->setObjectName(QString::fromUtf8("search_desc"));
        search_desc->setGeometry(QRect(450, 200, 101, 21));
        add_file = new QLineEdit(mainApp);
        add_file->setObjectName(QString::fromUtf8("add_file"));
        add_file->setGeometry(QRect(40, 80, 113, 21));
        add_name = new QLineEdit(mainApp);
        add_name->setObjectName(QString::fromUtf8("add_name"));
        add_name->setGeometry(QRect(40, 120, 113, 21));
        add_descriptor = new QLineEdit(mainApp);
        add_descriptor->setObjectName(QString::fromUtf8("add_descriptor"));
        add_descriptor->setGeometry(QRect(40, 160, 113, 21));
        delete_2 = new QPushButton(mainApp);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(190, 30, 121, 31));
        add_price = new QLineEdit(mainApp);
        add_price->setObjectName(QString::fromUtf8("add_price"));
        add_price->setGeometry(QRect(40, 200, 113, 21));
        delete_name = new QLineEdit(mainApp);
        delete_name->setObjectName(QString::fromUtf8("delete_name"));
        delete_name->setGeometry(QRect(190, 80, 113, 21));
        deposit = new QPushButton(mainApp);
        deposit->setObjectName(QString::fromUtf8("deposit"));
        deposit->setGeometry(QRect(330, 30, 113, 32));
        deposit_amt = new QLineEdit(mainApp);
        deposit_amt->setObjectName(QString::fromUtf8("deposit_amt"));
        deposit_amt->setGeometry(QRect(330, 80, 113, 21));
        label = new QLabel(mainApp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(38, 60, 121, 20));
        label_2 = new QLabel(mainApp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 91, 20));
        label_3 = new QLabel(mainApp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 140, 71, 16));
        label_4 = new QLabel(mainApp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 180, 59, 16));
        label_5 = new QLabel(mainApp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 60, 91, 20));
        label_6 = new QLabel(mainApp);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 60, 81, 20));
        label_7 = new QLabel(mainApp);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 180, 71, 16));
        label_8 = new QLabel(mainApp);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(130, 240, 91, 21));
        gridLayoutWidget = new QWidget(mainApp);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 269, 201, 171));
        yourproducts = new QGridLayout(gridLayoutWidget);
        yourproducts->setObjectName(QString::fromUtf8("yourproducts"));
        yourproducts->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(mainApp);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(390, 230, 231, 161));
        products = new QGridLayout(gridLayoutWidget_2);
        products->setObjectName(QString::fromUtf8("products"));
        products->setContentsMargins(0, 0, 0, 0);
        next_user = new QPushButton(mainApp);
        next_user->setObjectName(QString::fromUtf8("next_user"));
        next_user->setGeometry(QRect(120, 450, 113, 32));
        next_prod = new QPushButton(mainApp);
        next_prod->setObjectName(QString::fromUtf8("next_prod"));
        next_prod->setGeometry(QRect(390, 440, 113, 32));
        label_9 = new QLabel(mainApp);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(490, 60, 101, 21));
        balance = new QLineEdit(mainApp);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(490, 90, 113, 21));
        balance->setReadOnly(true);
        pushButton = new QPushButton(mainApp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 440, 113, 32));
        cost = new QLineEdit(mainApp);
        cost->setObjectName(QString::fromUtf8("cost"));
        cost->setGeometry(QRect(510, 410, 113, 21));
        sellerid = new QLineEdit(mainApp);
        sellerid->setObjectName(QString::fromUtf8("sellerid"));
        sellerid->setGeometry(QRect(390, 400, 113, 21));
        prodname = new QLineEdit(mainApp);
        prodname->setObjectName(QString::fromUtf8("prodname"));
        prodname->setGeometry(QRect(390, 420, 113, 21));
        logout = new QPushButton(mainApp);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(500, 20, 113, 32));

        retranslateUi(mainApp);

        QMetaObject::connectSlotsByName(mainApp);
    } // setupUi

    void retranslateUi(QDialog *mainApp)
    {
        mainApp->setWindowTitle(QCoreApplication::translate("mainApp", "Dialog", nullptr));
        add->setText(QCoreApplication::translate("mainApp", "Add Product", nullptr));
        search->setText(QCoreApplication::translate("mainApp", "Search", nullptr));
        search_desc->setText(QString());
        add_file->setText(QString());
        add_name->setText(QString());
        add_descriptor->setText(QString());
        delete_2->setText(QCoreApplication::translate("mainApp", "Delete Product", nullptr));
        add_price->setText(QString());
        delete_name->setText(QString());
        deposit->setText(QCoreApplication::translate("mainApp", "Deposit", nullptr));
        deposit_amt->setText(QString());
        label->setText(QCoreApplication::translate("mainApp", "File eq. \"cat.png\"", nullptr));
        label_2->setText(QCoreApplication::translate("mainApp", "Product Name", nullptr));
        label_3->setText(QCoreApplication::translate("mainApp", "descriptor", nullptr));
        label_4->setText(QCoreApplication::translate("mainApp", "price in $", nullptr));
        label_5->setText(QCoreApplication::translate("mainApp", "Product Name", nullptr));
        label_6->setText(QCoreApplication::translate("mainApp", "amount in $", nullptr));
        label_7->setText(QCoreApplication::translate("mainApp", "descriptor", nullptr));
        label_8->setText(QCoreApplication::translate("mainApp", "your products", nullptr));
        next_user->setText(QCoreApplication::translate("mainApp", "Next", nullptr));
        next_prod->setText(QCoreApplication::translate("mainApp", "Next", nullptr));
        label_9->setText(QCoreApplication::translate("mainApp", "Account Balance", nullptr));
        pushButton->setText(QCoreApplication::translate("mainApp", "Buy", nullptr));
        logout->setText(QCoreApplication::translate("mainApp", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainApp: public Ui_mainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
