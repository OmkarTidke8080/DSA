// Move all zeros to the end

#include<iostream>
#include <vector>
using namespace std;

void move_zero(int Arr[], int size)
{
    int j = -1;

   for(int i = 0; i < size; i++)
   {
    if(Arr[i] == 0)
    {
        j = i;
        break;
    }
   }

   for(int i = j + 1; i < size; i++)
   {
     if(Arr[i] != 0)
     {
        swap(Arr[i], Arr[j]);
        j++;
     }
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