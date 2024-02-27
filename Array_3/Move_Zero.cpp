// Move all zeros to the end

#include<iostream>
#include <vector>
using namespace std;

void move_zero(int Arr[], int size)
{
    vector<int> temp;
    
    // step 1
    for(int i = 0; i < size; i++)
    {
        if(Arr[i] != 0)
        {
            temp.push_back(Arr[i]);
        }
    }

    // step 2
    for(int i = 0; i < temp.size(); i++)
    {
        Arr[i] = temp[i];
    }

    // step 3
    for(int i = temp.size(); i < size; i++)
    {
        Arr[i] = 0;
    }
}

void Display(int Arr[], int size)
{
    cout<<"Elements after moving zeros : "<<"\n";
    for(int i = 0; i < size; i++)
    {
        cout<<Arr[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"Enter size of array : "<<"\n";
    cin>>size;

    int Arr[size];


    cout<<"Enter elements of array : "<<"\n";
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }

    move_zero(Arr, size);
    Display(Arr, size);

    return 0;

}