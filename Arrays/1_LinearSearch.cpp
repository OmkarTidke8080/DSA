#include <iostream>
using namespace std;

void LinearSearch(int Arr[], int size, int target)
{
    bool flag = 0;
    // 0 -> found
    // 1 -> not found

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == target)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Target found ";
    }
    else
    {
        cout << "Target not in the array ";
    }
}

int main()
{
    int Arr[6] = {2, 4, 6, 8, 10, 12};
    int target = 10;
    int n = 6;
    LinearSearch(Arr, n, target);

    return 0;
}