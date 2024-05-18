// Find unique elements from the array

#include <iostream>
using namespace std;

void FindUnique(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int freq = 1;

        for (int j = 0; j <= size; j++)
        {

            if (Arr[i] == Arr[j])
            {
                freq++;
            }

            if (freq == 1)
            {
                cout << "The unique element is : " << Arr[i];
            }
        }
    }
}

int main()
{
    int Arr[8] = {10, 10, 10, 20, 30, 20, 10, 10};
    int n = 8;
    FindUnique(Arr, n);

    return 0;
}