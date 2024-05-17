#include <iostream>
using namespace std;

void CountZeroOne(int Arr[], int size)
{
    int OneCounter = 0;
    int ZeroCounter = 0;

    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == 1)
        {
            OneCounter++;
        }
        else if (Arr[i] == 0)
        {
            ZeroCounter++;
        }
    }

    cout << "The Number of xeros and Ones are : " << ZeroCounter << ", " << OneCounter;
}

int main()
{
    int Arr[8] = {0, 0, 1, 0, 1, 2, 1, 0};
    int n = 8;
    CountZeroOne(Arr, n);

    return 0;
}