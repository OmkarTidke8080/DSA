// Print all pairs from the array

#include <iostream>
using namespace std;

int PrintPairs(int Arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << Arr[i] << " " << Arr[j] << endl;
        }
    }
}

int main()
{
    int Arr[8] = {10, 20, 30};
    int n = 3;

    int unique = PrintPairs(Arr, n);
    cout << "Unique is : " << unique;

    return 0;
}