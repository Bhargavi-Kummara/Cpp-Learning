#include <iostream>
#include <cstdlib>

using std::cout;

int find_smallest_element(int arr[], int n) {
    int small = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
    }
    return small;
}

int find_largest_element(int arr[], int n) {
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }
    return large;
}

int main()
{
    int min, max;
    int a[] = {8, 10, -2, 15, 22, 1, 4};
    min = find_smallest_element(a,6);
    max = find_largest_element(a,6);
    cout << "Smallest element is: " << min << std::endl;
    cout << "Largest element is: " << max << std::endl;
}
