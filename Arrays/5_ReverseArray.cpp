// Find the reverse  of the given array

#include <iostream>
using namespace std;

void Reverse(int Arr[], int size)
{
    // int left = 0;
    // int right = size -1;

    // while( left <= right)
    // {
    //     swap(Arr[left],Arr[right]);
    //     left++;
    //     right--;
    // }

    for (int left = 0, right = size - 1; left <= right; left++, right--)
    {
        swap(Arr[left], Arr[right]);
    }

    cout << "Reversed array is : " << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    int Arr[8] = {5, 3, 6, 2, 8, 9, 4, 8};
    int n = 8;
    Reverse(Arr, n);

    return 0;
}