// Reomve duplicate elements from given array

#include <iostream>
using namespace std;

class Array
{
public:
    int removeDuplicate(int Arr[], int size)
    {
        int i = 0;

        for (int j = 1; j < size; j++)
        {
            if (Arr[i] != Arr[j])
            {
                i++;
                Arr[i] = Arr[j];
            }
        }

        return i + 1;
    }
};

int main()
{
    Array ar;

    int size;
    cout << "Enter size of array : "
         << "\n";
    cin >> size;

    int Arr[size];

    cout << "Enter " << size << "elements of array : "
         << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }

    int k = ar.removeDuplicate(Arr, size);
    for (int i = 0; i < k; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}