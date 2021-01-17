/*
 * user.cpp
 *
 *  Created on: Jan. 14, 2021
 *      Author: noahlee
 */

#include "user.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

vector<product> DB;
vector<string> userSave;
User* loggedIn;

//Constructor to instantiate a User object based on log in info
User :: User(string name){
    this->username = name;
    for (int i = 0; i < userSave.size(); i++){
        if (userSave.at(i) == name){
            this->pword = userSave.at(i+1);
            this->balance = stof(userSave.at(i+2));
        }
    }
}

//Note this constructor would be used if a create profile was added
User :: User(string nm, string pword, float balance){
    this->username = nm;
    this->pword = pword;
    this->balance = balance;
    stringstream bal;
    bal << std::fixed << setprecision(2) << balance;
    string bally = bal.str();
    userSave.push_back("//");
    userSave.push_back(this->username);
    userSave.push_back(this->pword);
    userSave.push_back(bally);
}

void User :: addProduct(string fileName, string nm, string descriptors, float price){
    product temp;
    temp.imageFile = fileName;
    temp.name = nm;
    temp.descriptors = descriptors;
    temp.User = this->username;
    temp.price = price;
    DB.push_back(temp);
    save();
}

void User :: deleteProduct(string prodName){
    for (int i = 0; i < DB.size(); i++){
        if (prodName == DB.at(i).name && this->username == DB.at(i).User){
            DB.erase(DB.begin() + i);
        }
    }
    save();
}

void User :: purchaseProduct(string prodName){
    string seller;
    float price;
    for (int i = 0; i < DB.size(); i++){
        if (prodName == DB.at(i).name){
            seller = DB.at(i).User;
            price = DB.at(i).price;
            DB.at(i).User = this->username;
            this->balance -= price;
        }
    }
    for (int i = 0; i < userSave.size(); i++){
        if (userSave.at(i) == seller){
            float currbalance = stof(userSave.at(i+2));
            currbalance += price;
            stringstream temp;
            temp << std::fixed << setprecision(2) << currbalance;
            string toSave = temp.str();
            userSave.at(i + 2) = toSave;
        }
        else if (userSave.at(i) == this->username){
            stringstream temp;
            temp << std::fixed << setprecision(2) << this->balance;
            string toSave = temp.str();
            userSave.at(i + 2) = toSave;
        }
    }
    save();
}

void User :: deposit(float amount){
    this->balance += amount;
    for (int i = 0; i < userSave.size(); i++){
        if (userSave.at(i) == this->username){
            stringstream temp;
            temp << std::fixed << setprecision(2) << this->balance;
            string toSave = temp.str();
            userSave.at(i + 2) = toSave;
        }
    }
    save();
}

void initiate() {
    string line;
    QFile saveUsers(QCoreApplication::applicationDirPath() + "/../../../users.txt");
    saveUsers.open(QIODevice::ReadOnly);
    QTextStream user(&saveUsers);
    while (!user.atEnd())
    {
       QString line = user.readLine();
       userSave.push_back(line.toStdString());
    }
    saveUsers.close();
    QFile saveData(QCoreApplication::applicationDirPath() + "/../../../data.txt");
    saveData.open(QIODevice::ReadOnly);
    QTextStream data(&saveData);
    product temp;
    while (!data.atEnd()){
        QString line = data.readLine();
        QStringList list = line.split(" ");
        if (list.size() < 4){
            break;
        }
        temp.User = list.at(0).toStdString();
        temp.name = list.at(1).toStdString();
        temp.price = stof(list.at(2).toStdString());
        temp.imageFile = list.at(3).toStdString();
        temp.descriptors = list.at(4).toStdString();
        DB.push_back(temp);
    }
    saveData.close();
}

void save() {
    QFile saveUsers(QCoreApplication::applicationDirPath() + "/../../../users.txt");
    saveUsers.open(QIODevice::WriteOnly);
    QTextStream user(&saveUsers);
    for (int i = 0; i < userSave.size(); i++){
        user << QString::fromStdString(userSave.at(i)) << endl;
    }
    saveUsers.close();

    QFile saveData(QCoreApplication::applicationDirPath() + "/../../../data.txt");
    saveData.open(QIODevice::WriteOnly);
    QTextStream data(&saveData);
    for (product p : DB){
        stringstream price;
        price << std::fixed << setprecision(2) << p.price;
        string cost = price.str();
        data << QString::fromStdString(p.User + " ") <<
                QString::fromStdString(p.name + " ") <<
                QString::fromStdString(cost) << " " + QString::fromStdString(p.imageFile) << " " +
                QString::fromStdString(p.descriptors) << endl;
    }
    saveData.close();
}
