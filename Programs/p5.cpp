// Write a program in C++ to swap two numbers.

#include <iostream>
using namespace std;

int main()
{
    cout << "Swap two numbers :" << endl;
    cout << "----------------------------\n";
    int n1, n2, temp;
    cout << "Input first number: ";
    cin >> n1;
    cout << "Input second number: ";
    cin >> n2;
    //Performing swapping
    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "\nAfter swapping, first number is: " << n1;
    cout << "\nAfter swapping, second number is: " << n2;
}