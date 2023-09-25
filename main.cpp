#include <QCoreApplication>
#include <iostream>

#include "Recursion.h"
#include "Rmi.h"
#include "FibonacciNumber.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Factorical" << std::endl;
    runRecursion();

    std::cout << "\nRMI" << std::endl;
    runRMI();

    std::cout << "\nFibonacci Number" << std::endl;
    runFibonacciNumber();



    return a.exec();
}
