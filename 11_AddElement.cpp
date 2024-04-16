// Reomve duplicate elements from given array

#include <iostream>
using namespace std;

class Array
{
public:
    void Add_At_Begin(int *Arr, int size, int start)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            Arr[i + 1] = Arr[i];
        }
        Arr[0] = start;
    }
    void Add_At_End(int *Arr, int size, int end)
    {
        Arr[size] = end;
    }

    void Add_At_Pos(int *Arr, int size, int Pos_Element, int pos)
    {
        for (int i = size; i >= pos; i--)
        {
            Arr[i] = Arr[i - 1];
        }

        Arr[pos - 1] = Pos_Element;
    }
};

int main()
{
    Array ar;
    int start;
    int end;
    int Pos_Element;
    int pos;

    int size;
    cout << "Enter size of array : "
         << "\n";
    cin >> size;

    int Arr[size];

    cout << "Enter " << size << " "
         << "elements of array : "
         << "\n";

    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter element to insert at Start : "
         << "\n";
    cin >> start;

    cout << "Enter element to insert at End : "
         << "\n";
    cin >> end;

    cout << "Enter element to insert and Postion of element : "
         << "\n";
    cin >> Pos_Element >> pos;

    ar.Add_At_Begin(Arr, size, start);
    ar.Add_At_End(Arr, size, end);
    ar.Add_At_Pos(Arr, size, Pos_Element, pos);

    cout << "Array after inserting elements: "
         << "\n";

    for (int i = 0; i <= size; i++)
    {
        cout << Arr[i] << "\n";
    }

    return 0;
}