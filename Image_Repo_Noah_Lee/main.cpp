#include "imagerepo.h"
#include "user.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDir>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void init();
void save();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageRepo w;
    w.show();
    init();
    return a.exec();
}

void init() {
    string line;
    QFile saveUsers(QCoreApplication::applicationDirPath() + "/../../../users.txt");
    saveUsers.open(QIODevice::ReadOnly);
    QTextStream in(&saveUsers);
    while (!in.atEnd())
    {
       QString line = in.readLine();
       userSave.push_back(line.toStdString());
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
