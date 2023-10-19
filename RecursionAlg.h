#ifndef RECURSIONALG_H
#define RECURSIONALG_H

#include <vector>
#include <iostream>

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


// PRINT ARRAY
void printArray(char array[])
{
    if (array[0] == '\0') { return; }
    std::cout << array[0] << " "; // SWAP WITH NEXT LINE TO REVERSE
    printArray(array + 1);
}


// LENGHT OF ARRAY
int length(char array[])
{
    if (array[0] == '\0') { return 0;}
    int count = length(array + 1);
    return 1 + count;
}


// REPLACE CHAR IN ARRAY
void replaceChar(char array[], char oldChar, char newChar)
{
    if(array[0] == '\0') { return; }
    if(array[0] == oldChar)  { array[0] = newChar;}
    replaceChar(array + 1, oldChar, newChar);
}

// REMOVE CHAR
void removeChar(char array[], char chatToDelete)
{
    if(array[0] == '\0') { return; }
    if(array[0]!= chatToDelete)   { removeChar(array + 1, chatToDelete);} // remove char
    else
    {
        for(int i = 0; array[i] != '\0'; i++) {array[i] = array[i + 1];} // move chars to removed char place
        removeChar(array, chatToDelete);
    }
}


// REMOVE DUBLICATS IN ARRAY
void removeDuplicates(char array[])
{
    if (array[0] == '\0')       { return; }
    if (array[0] != array[1])   { removeDuplicates(array + 1); }        // CHECK IF CURRENT AND NEXT CHAR ARE EQUAL
    else
    {
        for(int i = 0; array[i] != '\0'; i++) {array[i] = array[i+1];}  // MOVE NEXT CHAR INSTEAD CURRENT, WORKS LIKE REMOVING
        removeDuplicates(array);
    }
}


// PRINT ALL SUBSEQUNCES OF ARRAY
void printSubs(std::string input, std::string output, std::vector<std::string> &v)
{
    if (input.length() == 0)
    {
        v.push_back(output);
        return;
    }
    printSubs(input.substr(1), output + input[0], v);   // include
    printSubs(input.substr(1), output, v);              // exclude
}


// CONVERT STRING TO INT
int convertStringToInt(char str[], int size)
{
    if (size == 0) {return 0;}
    int smallAns = convertStringToInt(str, size - 1);
    int lastDigit = str[size - 1] - '0';
    int ans = smallAns * 10 + lastDigit; // multiply by 10 to "create a place" for next int with 0
    return ans;
}

// TOWER OF HANOI
int TowerOfHanoi (int n)
{
    if(n==0) {return 0;}
    return TowerOfHanoi(n - 1) + 1 + TowerOfHanoi(n - 1);
}

#endif // RECURSIONALG_H
