#ifndef FIBONACCINUMBER_H
#define FIBONACCINUMBER_H

#include <iostream>

void Fibonacce(int index)
{
    int first {0};
    int second {1};

    while (index != 0)
    {
        long long fib = first + second;
        std::cout << fib << " ";
        first = second;
        second = fib;
        index--;
    }
    std::cout << std::endl;
}

int FibonacciByIndex(int index)
{
    // 1st step - Base Case
    if (index == 0) {return 0;}
    if (index == 1) {return 1;}

    // Recursive Case
    int smallOutput_1 = FibonacciByIndex(index - 1);
    int smallOutput_2 = FibonacciByIndex(index - 2);

    // Calculation
    return smallOutput_1 + smallOutput_2;
}


void runFibonacciNumber()
{
    Fibonacce(100);
    std::cout << "Fibonacce by index 5 is - " << FibonacciByIndex(5) << std::endl;


}

#endif // FIBONACCINUMBER_H
