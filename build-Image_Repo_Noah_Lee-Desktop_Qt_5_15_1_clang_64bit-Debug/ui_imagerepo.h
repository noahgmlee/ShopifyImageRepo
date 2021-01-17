/********************************************************************************
** Form generated from reading UI file 'imagerepo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEREPO_H
#define UI_IMAGEREPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageRepo
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *userlabel;
    QLabel *passlabel;
    QLineEdit *userbox;
    QLineEdit *passbox;
    QPushButton *login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ImageRepo)
    {
        if (ImageRepo->objectName().isEmpty())
            ImageRepo->setObjectName(QString::fromUtf8("ImageRepo"));
        ImageRepo->resize(800, 600);
        centralwidget = new QWidget(ImageRepo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 100, 401, 211));
        userlabel = new QLabel(groupBox);
        userlabel->setObjectName(QString::fromUtf8("userlabel"));
        userlabel->setGeometry(QRect(110, 70, 59, 16));
        passlabel = new QLabel(groupBox);
        passlabel->setObjectName(QString::fromUtf8("passlabel"));
        passlabel->setGeometry(QRect(110, 100, 59, 16));
        userbox = new QLineEdit(groupBox);
        userbox->setObjectName(QString::fromUtf8("userbox"));
        userbox->setGeometry(QRect(190, 70, 131, 21));
        passbox = new QLineEdit(groupBox);
        passbox->setObjectName(QString::fromUtf8("passbox"));
        passbox->setGeometry(QRect(190, 100, 131, 21));
        login = new QPushButton(groupBox);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(140, 150, 113, 32));
        ImageRepo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ImageRepo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ImageRepo->setMenuBar(menubar);
        statusbar = new QStatusBar(ImageRepo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ImageRepo->setStatusBar(statusbar);

        retranslateUi(ImageRepo);

        QMetaObject::connectSlotsByName(ImageRepo);
    } // setupUi

    void retranslateUi(QMainWindow *ImageRepo)
    {
        ImageRepo->setWindowTitle(QCoreApplication::translate("ImageRepo", "ImageRepo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImageRepo", "Sign In", nullptr));
        userlabel->setText(QCoreApplication::translate("ImageRepo", "username", nullptr));
        passlabel->setText(QCoreApplication::translate("ImageRepo", "password", nullptr));
        login->setText(QCoreApplication::translate("ImageRepo", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageRepo: public Ui_ImageRepo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEREPO_H
