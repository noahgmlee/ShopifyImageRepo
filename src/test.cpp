/*
 * test.cpp
 *
 *  Created on: Jan. 14, 2021
 *      Author: noahlee
 */
/*
 * test.cpp
 *
 *  Created on: Jan. 14, 2021
 *      Author: noahlee
 */

#include "user.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

vector<product> DB;
vector<string> userSave;

using namespace std;

void init();
void save();

int main() {
	init();
	//User nono("Noahlee", "0000", 10.0);
	User nono("Noahlee");
	nono.deposit(2.0);
	nono.addProduct("cat.png", "cat", "kittycat", 5.99);
	save();
	return 0;
}

void init() {
	string line;
	fstream saveUsers;
	saveUsers.open("users.txt");
	while (saveUsers >> line){
		userSave.push_back(line);
	}
	saveUsers.close();
	fstream saveData;
	saveData.open("data.txt");
	product temp;
	string word;
	int count = 0;
	while (saveData >> word){
		if (count == 0){
			temp.User = word;
		}
		else if (count == 1){
			temp.name = word;
		}
		else if (count == 2){
			temp.price = stof(word);
		}
		else if (count == 3){
			temp.imageFile = word;
		}
		else {
			temp.descriptors = word;
			DB.push_back(temp);
		}
		count++;
		if (count == 5)
			count = 0;
	}
	saveData.close();
}

void save() {
	fstream saveUsers;
	saveUsers.open("users.txt");
	for (string line : userSave){
			saveUsers << line << endl;
	}
	saveUsers.close();
	std::ofstream newFile;
	newFile.open("data.txt", std::ofstream::out | std::ofstream::trunc);
	for (product p : DB){
		newFile << p.User + " " << p.name + " " << fixed << setprecision(2) << p.price << " " + p.imageFile << " " + p.descriptors << endl;
	}
	newFile.close();
}

