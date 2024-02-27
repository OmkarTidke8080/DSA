// Linear Search Problem 

#include<iostream>
#include <vector>
using namespace std;

int  LinearSearch(int Arr[], int size, int iNo)
{
   for(int i = 0; i < size; i++)
   {
     if(Arr[i] == iNo)
     {
        return i;
     }
   }

   return -1;
}


int main()
{
    int size;
    int no;

    cout<<"Enter size of array : "<<"\n";
    cin>>size;

    int Arr[size];


    cout<<"Enter elements of array : "<<"\n";
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter the number to search : "<<"\n";
    cin>>no;

    int iRet  = LinearSearch(Arr, size, no);
    cout<<"Element found at position  : "<<iRet<<"\n";

    return 0;

}