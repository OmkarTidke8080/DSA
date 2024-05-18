// Find the maximum number from the given array

#include <iostream>
using namespace std;

void MaxNumber(int Arr[], int size)
{
    int max = Arr[0];

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > max)
        {
            max = Arr[i];
        }
    }

    cout << "The Maximum number from the array is : " << max;
}

int main()
{
    int Arr[8] = {5, 3, 6, 2, 8, 9, 4, 8};
    int n = 8;
    MaxNumber(Arr, n);

    return 0;
}