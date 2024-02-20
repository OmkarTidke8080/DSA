// find the peak element which is not smaller than its neighbours

#include<iostream>
using namespace std;

void peakElement(int Arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if( (Arr[i-1] <= Arr[i]) && (Arr[i+1] <= Arr[i]))
        {
            cout<<"Peak element is : ";
            cout<<Arr[i]<<"\n";
        }
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

    peakElement(Arr,size);
    

    return 0;
}