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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageRepo w;
    w.show();
    initiate();
    return a.exec();
}
