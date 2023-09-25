#ifndef RECURSION_H
#define RECURSION_H

#include <iostream>

template <typename T>
T Factorial(T x)
{
    (x == 0) ? x = 1 : x = (x * Factorial(x - 1));
    return x;
}

void runRecursion()
{
    std::cout << "Factorial with recursion func - " << Factorial(5) << std::endl;
}

#endif // RECURSION_H
