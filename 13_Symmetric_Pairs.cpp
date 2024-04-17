// find all symmetric pairs in array

#include <iostream>
using namespace std;

void Symmetric_Pairs(int **arr, int row, int col)
{
    cout << "Symmetric pairs are : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                cout << "(" << arr[i][1] << " " << arr[i][0] << ")"
                     << " ";
                break;
            }
        }
    }
}

int main()
{
    // int row, col;

    // cout << "Enter number of rows"
    //      << "\n";
    // cin >> row;

    // cout << "Enter number of columns : "
    //      << "\n";
    // cin >> col;

    // int **arr = new int *[row];

    // cout << "Enter elements of array : "
    //      << " ";
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // Symmetric_Pairs(arr, row, col);

    int n = 5;

    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    cout << "The Symmetric Pairs are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                cout << "(" << arr[i][1] << " " << arr[i][0] << ")"
                     << " ";
                break;
            }
        }
    }

    return 0;
}