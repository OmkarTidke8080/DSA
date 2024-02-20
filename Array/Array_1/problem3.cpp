// program to sort the given array

#include<iostream>
using namespace std;

void BubbleSort(int Arr[], int size)
{
   int temp = 0;

   for(int i = 0; i < size-1; i++)
   {
      for(int j = 0; j < size - i - 1; j++)
      {
         if( Arr[j] > Arr[j+1])
         {
            temp = Arr[j];
            Arr[j] = Arr[j+1];
            Arr[j+1] = temp;
         }
      }
   }

}

void display(int Arr[], int size)
{
    cout<< "sorted elements are : "<<"\n";
   for(int i = 0; i < size; i++)
   {
     cout<<Arr[i]<<"\n";
   }
}

int main()
{
    int size = 0;

    cout<<"Enter size of array  : "<<"\n";
    cin>>size;

    int Arr[size];

    cout<<"Enter elements of array : "<<"\n";
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }

    BubbleSort(Arr,size);
    display(Arr,size);
    

    return 0;
}