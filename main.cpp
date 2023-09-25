#include <QCoreApplication>
#include <iostream>

#include "Recursion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Factorical" << std::endl;
    runRecursion();



    return a.exec();
}
