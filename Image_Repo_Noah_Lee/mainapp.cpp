#include "mainapp.h"
#include "user.h"
#include "ui_mainapp.h"
#include <iostream>

vector<string> usernames;

mainApp::mainApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainApp)
{
    ui->setupUi(this);
    updateProducts(0);
}

mainApp::~mainApp()
{
    delete ui;
}

void mainApp :: updateProducts(int index)
{
    if (!ui->products->isEmpty()){
        QLayoutItem* toRemove;
        toRemove = ui->products->layout()->takeAt(0);
        delete toRemove->widget();
    }
    else if (!ui->yourproducts->isEmpty()){
        QLayoutItem* toRemove;
        toRemove = ui->yourproducts->layout()->takeAt(0);
        delete toRemove->widget();
        delete toRemove;
    }
    for (int i = index; i < DB.size(); i++){
        bool userProdAdded = false;
        bool prodAdded = false;
        QString file = QString::fromStdString(DB.at(i).imageFile);
        QPixmap image(QCoreApplication::applicationDirPath() + "/../../../" + file);
        image.scaledToHeight(2);
        image.scaledToWidth(2);
        QLabel* product = new QLabel();
        QLabel* userproduct = new QLabel();
        product->setScaledContents(true);
        product->setPixmap(image);
        userproduct->setScaledContents(true);
        userproduct->setPixmap(image);
        if (DB.at(index).User == loggedIn->getName() && !userProdAdded){
            ui->yourproducts->addWidget(userproduct, 0, 0);
            userProdAdded = true;
            indUser = i;
        }
        else if (!prodAdded){
            ui->products->addWidget(product, 0, 0);
            prodAdded = true;
            indProd = i;
        }
        else if (prodAdded && userProdAdded){
            break;
        }
        else if (i == index){
            break;
        }
        index = index % DB.size();
    }
}

void mainApp::on_add_clicked()
{
    loggedIn->addProduct(ui->add_file->text().toStdString() , ui->add_name->text().toStdString(),
                        ui->add_descriptor->text().toStdString(), stoi(ui->add_price->text().toStdString()));
    updateProducts(0);
}

void mainApp::on_next_user_clicked()
{
    updateProducts(indUser);
}

void mainApp::on_next_prod_clicked()
{
    updateProducts(indProd);
}

void mainApp::on_delete_2_clicked()
{
    loggedIn->deleteProduct(ui->delete_name->text().toStdString());
    updateProducts(0);
}
