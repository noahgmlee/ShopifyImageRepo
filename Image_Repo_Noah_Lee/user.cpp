/*
 * user.cpp
 *
 *  Created on: Jan. 14, 2021
 *      Author: noahlee
 */

#include "user.h"

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
    this->products.push_back(temp);
    DB.push_back(temp);
}

void User :: deleteProduct(string prodName){
    for (int i = 0; i < products.size(); i++){
        if (prodName == this->products.at(i).name){
            products.erase(products.begin() + i);
            for (int i = 0; i < DB.size(); i++){
                if (prodName == DB.at(i).name && this->username == DB.at(i).User){
                    DB.erase(DB.begin() + i);
                }
            }
        }
    }
}

void User :: purchaseProduct(string prodName){
    for (int i = 0; i < DB.size(); i++){
        if (prodName == DB.at(i).name){
            DB.at(i).User = this->username;
            this->products.push_back(DB.at(i));
        }
    }
}

void User :: deposit(float amount){
    this->balance += amount;
    for (int i = 0; i < userSave.size(); i++){
        if (userSave.at(i) == this->pword){
            stringstream temp;
            temp << std::fixed << setprecision(2) << this->balance;
            string toSave = temp.str();
            userSave.at(i + 1) = toSave;
        }
    }
}
