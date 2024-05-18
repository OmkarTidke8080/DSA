// Print extreme points in the array

#include <iostream>
using namespace std;

void PrintExtreme(int Arr[], int size)
{

    // for (int left = 0, right = size - 1; left <= right; left++, right--)
    // {
    //     cout << Arr[left] << " " << Arr[right] << " ";
    // }

    int left = 0;
    int right = size - 1;

    while (left <= right)

    {
        if (left == right)
        {
            cout << Arr[left] << endl;
        }
        else
        {
            cout << Arr[left] << endl;
            cout << Arr[right] << endl;
        }

        left++;
        right--;
    }
}

int main()
{
    int Arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8;
    PrintExtreme(Arr, n);

    return 0;
}