// Calculate sum of elements in an array 

#include<iostream>
using namespace std;

class Sum
{
    public :

    void Sum_OF_Elements(int *Arr, int size)
    {
        int Addition = 0;

       for(int i = 0; i < size; i++)
       {
           Addition = Addition + Arr[i];
       }

       cout<<"Sum of elements is : "<<Addition;
       

    }

};

int main()
{
    Sum sum;

    int size = 0;
    cout<<"Enter size of array : "<<endl;
    cin>>size;

    int Arr[size];
    cout<<"Enter " <<size<< " elements of array :"<< endl;
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }

    sum.Sum_OF_Elements(Arr,size);

    return 0;
}