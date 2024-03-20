// Find smallest element in the array

#include<iostream>
using namespace std;

class Small_Element
{
    public :

    void smallest(int *Arr, int size)
    {
        int small = Arr[0];

        for(int i = 0 ; i < size; i++)
        {
            if(Arr[i] < small)
            {
                small = Arr[i];
            }
        }

        cout<<"Smallest element  is : "<<small <<endl;

    }
};

int main()
{
    Small_Element se;

    int size = 0;
    cout<<"Enter size of array : "<<endl;
    cin>>size;

    int Arr[size];
    cout<<"Enter " <<size<< " elements of array :"<< endl;
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }

    se.smallest(Arr,size);



    


    return 0;
}