//  sort 0's and 1's in the array

#include <iostream>
using namespace std;

void SortZeroOne(int Arr[], int size)
{

    int low = 0;
    int mid = 0;

    while (mid < size)
    {
        if (Arr[mid] == 0)
        {
            swap(Arr[low], Arr[mid]);
            low++;
            mid++;
        }

        if (Arr[mid] == 1)
        {
            mid++;
        }
    }
}

void Display(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    int Arr[9] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int n = 9;

    SortZeroOne(Arr, n);
    Display(Arr, n);

    return 0;
}