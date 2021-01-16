#include "imagerepo.h"
#include "ui_imagerepo.h"
#include "user.h"
#include <QMessageBox>

ImageRepo::ImageRepo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ImageRepo)
{
    ui->setupUi(this);
}

ImageRepo::~ImageRepo()
{
    delete ui;
}


void ImageRepo::on_login_clicked()
{
    QString username = ui->userbox->text();
    QString password = ui->passbox->text();
    for (int i = 0; i < userSave.size(); i++){
        if (userSave.at(i) == username.toStdString()){
                if (userSave.at(i+1) == password.toStdString()){
                    hide();
                    loggedIn = new User(username.toStdString());
                    mainApp = new class mainApp(this);
                    mainApp->show();
                }
                else{
                     QMessageBox::information(this, "login", "incorrect username or password");
                }
        }
    }
}
