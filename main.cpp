#include <QCoreApplication>
#include <iostream>

#include "beverage.h"
#include "houseblend.h"
#include "milk.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beverage *beverage = new HouseBlend();
    cout << beverage->getDescription() << endl;

    return a.exec();
}
