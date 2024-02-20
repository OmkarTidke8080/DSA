#include<iostream>
using namespace std;

int SecondlargestElement(int Arr[], int size)
{
   int largest = Arr[0];
   int slargest = -1;

   for(int i = 1; i < size; i++)
   {
    if(Arr[i] > largest)
    {
        slargest = largest;
        largest = Arr[i];
    }
    else if(Arr[i] < largest && Arr[i] > slargest)
    {
       slargest = Arr[i];
    }
   }

   return slargest;

}

int main()
{
    int size;
    int iRet = 0;

    cout<<"Enter size of array : "<<"\n";
    cin>>size;

    int ptr[size];


    cout<<"Enter elements of array : "<<"\n";
    for(int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }

    iRet = SecondlargestElement(ptr,size);
    cout<<"The largest element is : "<<iRet;






    return 0;

}