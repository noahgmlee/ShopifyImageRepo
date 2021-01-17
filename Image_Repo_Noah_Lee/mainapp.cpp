#include "mainapp.h"
#include "user.h"
#include "ui_mainapp.h"
#include <iostream>
#include <sstream>
#include <iomanip>

vector<string> usernames;

mainApp::mainApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainApp)
{
    ui->setupUi(this);
    ui->balance->setText(QString::fromStdString(loggedIn->getBalance()));
    updateProducts(0, true, DB);
    updateProducts(0, false, DB);
}

mainApp::~mainApp()
{
    delete ui;
}

void mainApp :: updateProducts(int idx, bool ctl, vector<product> pr)
{
    int count = 0;
    if (ctl){
        if (!ui->products->isEmpty()){
            QLayoutItem* toRemove;
            toRemove = ui->products->layout()->takeAt(0);
            delete toRemove->widget();
            delete toRemove;
        }
        for (int i = idx; i < pr.size(); i = (i+1)%(pr.size())){
            if (count == pr.size()){
                break;
            }
            QString file = QString::fromStdString(pr.at(i).imageFile);
            QPixmap image(QCoreApplication::applicationDirPath() + "/../../../" + file);
            QLabel* product = new QLabel();
            product->setScaledContents(true);
            product->setPixmap(image);
            if (pr.at(i).User != loggedIn->getName()){
                ui->products->addWidget(product, 0, 0);
                ui->sellerid->setText(QString::fromStdString(pr.at(i).User));
                ui->prodname->setText(QString::fromStdString(pr.at(i).name));
                stringstream price;
                price << std::fixed << setprecision(2) << pr.at(i).price;
                QString cost = QString::fromStdString(price.str());
                ui->cost->setText(cost);
                if (i == pr.size() - 1){
                    this->indexDB = 0;
                }
                else{
                    this->indexDB = i + 1;
                }
                break;
            }
            count++;
        }
    }
    else{
        if (!ui->yourproducts->isEmpty()){
            QLayoutItem* toRemove;
            toRemove = ui->yourproducts->layout()->takeAt(0);
            delete toRemove->widget();
            delete toRemove;
        }
        for (int i = idx; i < DB.size(); i = (i+1)%(DB.size())){
            if (count == DB.size()){
                break;
            }
            QString file = QString::fromStdString(DB.at(i).imageFile);
            QPixmap image(QCoreApplication::applicationDirPath() + "/../../../" + file);
            QLabel* userproduct = new QLabel();
            userproduct->setScaledContents(true);
            userproduct->setPixmap(image);
            if (DB.at(i).User == loggedIn->getName()){
                ui->yourproducts->addWidget(userproduct, 0, 0);
                if (i == DB.size() - 1){
                    this->indexUSR = 0;
                }
                else{
                    this->indexUSR = i + 1;
                }
                break;
            }
            count++;
        }
    }
}

void mainApp::on_add_clicked()
{
    loggedIn->addProduct(ui->add_file->text().toStdString() , ui->add_name->text().toStdString(),
                        ui->add_descriptor->text().toStdString(), stof(ui->add_price->text().toStdString()));
    updateProducts(0, false, DB);
}

void mainApp::on_next_user_clicked()
{
    updateProducts(indexUSR, false, DB);
}

void mainApp::on_next_prod_clicked()
{
    if (ui->search_desc->text() == ""){
        updateProducts(indexDB, true, DB);
    }
    else{
        updateProducts(indexDB, true, inSearch);
    }
}

void mainApp::on_delete_2_clicked()
{
    loggedIn->deleteProduct(ui->delete_name->text().toStdString());
    updateProducts(0, false, DB);
}

void mainApp::on_deposit_clicked()
{
    loggedIn->deposit(stof(ui->deposit_amt->text().toStdString()));
    ui->balance->setText(QString::fromStdString(loggedIn->getBalance()));
}

void mainApp::on_pushButton_clicked()
{
    loggedIn->purchaseProduct(ui->prodname->text().toStdString());
    updateProducts(0, true, DB);
    updateProducts(0, false, DB);
    ui->balance->setText(QString::fromStdString(loggedIn->getBalance()));
}

void mainApp::on_search_clicked()
{
    string desc = ui->search_desc->text().toStdString();
    inSearch.clear();
    for (int i = 0; i < DB.size(); i++){
        if (DB.at(i).descriptors == desc){
            inSearch.push_back(DB.at(i));
        }
    }
    updateProducts(0, true, inSearch);
}

void mainApp::on_logout_clicked()
{
    hide();
    parentWidget()->show();
    close();
}
