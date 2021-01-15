/*
 * user.h
 *
 *  Created on: Jan. 14, 2021
 *      Author: noahlee
 */

#include <string>
#include <vector>

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
	float balance;
private:
	string username;
	string pword;
	vector<product> products;
	//float balance;
	vector<string> userInfo;
};

extern vector<product> DB;
extern vector<string> userSave;
