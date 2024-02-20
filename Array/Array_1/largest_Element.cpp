#include<iostream>
using namespace std;

int largestElement(int Arr[], int size)
{
   int largest = Arr[0];

   for(int i = 0; i < size; i++)
   {
     if(Arr[i] > largest){
        largest = Arr[i];
     }
   }


   return largest;
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

    iRet = largestElement(ptr,size);
    cout<<"The largest element is : "<<iRet;






    return 0;

}