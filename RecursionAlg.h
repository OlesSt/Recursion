#ifndef RECURSIONALG_H
#define RECURSIONALG_H

#include <vector>

// CHECK IF ARRAY SORTED
bool isSorted(int a[], int n){
    if (n == 0 || n == 1)    { return true; }
    if (a[0] > a[1])         { return false;}
    return isSorted(a + 1 , n - 1);
}


// SUM OF ARRAY ELEMENT
int sumOfArray(int a[], int n){
    if (n == 0)  { return 0; }
    return a[0] + sumOfArray(a + 1 , n - 1);
}

// CHECK IF ELEM IS IN ARRAY
bool isPresent(int array[], int size, int x)
{
    if (size == 0) { return false;}
    if (array[0] == x) { return true;}
    return isPresent(array + 1, size - 1, x);
}

// FIND FIRST INDEX OF ELEMENT IN ARRAY
int firstIndex(int array[], int size, int x, int first_index)
{
    if (first_index == size)     { return -1;}
    if (array[first_index] == x) { return first_index;}
    return firstIndex(array, size, x, first_index + 1);
}

// FIND LAST INDEX OF ELEMENT IN ARRAY
int lastIndex(int array[], int size, int x, int last_index)
{
    if (last_index == -1)         {return -3;}
    if (array[last_index] == x)   {return last_index;}
    return lastIndex(array, size, x, last_index - 1);
}

// COUNT ELEMENTS IN ARRAY
int countElem(int array[], int size, int x, int index)
{
    if (index == size)       {return 0;}
    if (array[index] == x)   {return 1 + countElem(array, size, x, index);}
    else                     {countElem(array, size, x, index+1);}
}

// SAVE ALL ELEMENT OF ARRAY TO VECTOR
void ArrayToVector(int array[], int size, int x, int index, std::vector<int> &vec)
{
    if (index ==size)          {return;}
    if (array[index] == x)     {vec.push_back(index);}
    ArrayToVector(array, size, x, index+1, vec);
}

// CHECK IF PALINDROME
bool isPalindrome(int array[], int startIndex, int endIndex)
{
    if (startIndex > endIndex)                  { return true; }    // suppose empty array is a palindrome
    if (array[startIndex] == array[endIndex])   { return isPalindrome(array,startIndex + 1,endIndex - 1); }
    else                                        { return false; }
}

#endif // RECURSIONALG_H
