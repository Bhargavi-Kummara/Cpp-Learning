//  Write a program in C++ to find Size of fundamental data types.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Find size of fundamental data types\n";
    cout << "-----------------------------------\n" << endl;
    
    cout << "The sizeof(char) is: " << sizeof(char) << endl;
    cout << "The sizeof(short) is: " << sizeof(short) << endl;
    cout << "The sizeof(int) is: " << sizeof(int) << endl;
    cout << "The sizeof(long) is: " << sizeof(long) << endl;
    cout << "The sizeof(long long) is: " << sizeof(long long) << endl;
    cout << "The sizeof(float) is: " << sizeof(float) << endl;
    cout << "The sizeof(double) is: " << sizeof(double) << endl;
    cout << "The sizeof(long double) is: " << sizeof(long double) << endl;
    cout << "The sizeof(bool) is: " << sizeof(bool) << endl;

    return EXIT_SUCCESS;
}