#ifndef RMI_H
#define RMI_H

#include <iostream>

int RMI(int n)
{
    // 1st step - base case f(0) and f(1) are True
    if (n == 0) { return 1; }

    // 2nd step - assumption
    int smallAns = RMI(n - 1);

    //3rd step - calculation
    int answer = n * smallAns;
    return answer;

}

void runRMI()
{
    std::cout << "RMI witn recirsion - " << RMI(5) << std::endl;

}

#endif // RMI_H
