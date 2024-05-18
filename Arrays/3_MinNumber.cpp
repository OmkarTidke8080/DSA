// Find the minimum number from the given array

#include <iostream>
using namespace std;

void MinNumber(int Arr[], int size)
{
    int min = Arr[0];

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] < min)
        {
            min = Arr[i];
        }
    }

    cout << "The Minimum number from the array is : " << min;
}

int main()
{
    int Arr[8] = {5, 3, 6, 2, 8, 9, 4, 8};
    int n = 8;
    MinNumber(Arr, n);

    return 0;
}