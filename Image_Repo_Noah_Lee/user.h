/*
 * user.h
 *
 *  Created on: Jan. 14, 2021
 *      Author: noahlee
 */

#include <string>
#include <vector>
#include <iomanip>
#include <sstream>
#pragma once
using namespace std;

struct product {
    string User;
    string name;
    float price;
    string imageFile;
    string descriptors;
};

class User {
public:
    User();
    User(string name);
    User(string name, string pword, float balance);
    void addProduct(string fileName, string name, string descriptors, float price);
    void purchaseProduct(string prodName);
    void deleteProduct(string prodName);
    void deposit(float amount);
    void search(string descriptors);
    string getName(){ return this->username; }
    string getBalance(){
        stringstream bal;
        bal << std::fixed << setprecision(2) << balance;
        return bal.str();
    }
private:
    string username;
    string pword;
    float balance;
    vector<string> userInfo;
};

void initiate();
void initiate2();
void save();

extern vector<product> DB;
extern vector<string> userSave;
extern User* loggedIn;
