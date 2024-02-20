// program to reverse the array
#include<iostream>
using namespace std;

void Reverse(int Arr[], int size)
{
   int Brr[size];

   for(int i = 0; i < size; i++)
   {
      Brr[i] = Arr[size - i - 1];
   }


   cout<<"Reversed array is : "<<"\n";
   for(int i = 0 ; i < size; i++)
   {
     cout<<Brr[i]<<"\n";
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

    Reverse(Arr,size);
    

    return 0;
}