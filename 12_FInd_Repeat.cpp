// Find all repaeting elements in the array

#include <iostream>
#include <vector>
using namespace std;

void Repeating_Elements(vector<int> arr, int n)
{
    int cnt = 0;
    int dup[n];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                dup[cnt++] = arr[i];
            }
        }
    }
    cout << "The repeating elements are: ";
    for (int i = 0; i < cnt; i++)
        if (dup[i] != dup[i + 1])
        {
            cout << dup[i] << " ";
        }
}

int main()
{
    vector<int> arr;
    int element = 0;
    int size;

    cout << "Enter size of array : "
         << "\n";
    cin >> size;

    cout << "Enter elements of array : "
         << "\n";

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    Repeating_Elements(arr, size);

    return 0;
}
