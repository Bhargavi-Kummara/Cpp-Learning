#include <iostream>
using namespace std;

bool is_even_sum(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return (sum % 2) == 0;
}

int main()
{
    int a[] = {2, 4, 6, 9, 13, 14};
    bool res;
    res = is_even_sum(a,6);
    cout << res << endl;
}