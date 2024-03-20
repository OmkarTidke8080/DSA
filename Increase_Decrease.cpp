// Rearrange array in increasing or decreasing order

// Find smallest element in the array

#include<iostream>
using namespace std;

class Increase_Decrease
{
    public :

    void ReArrange(int *Arr, int size)
    {
       for(int i = 0; i < size -1; i++)
       {
          for(int j = 0; j < size - i - 1; j++ )
          {
            if(Arr[j] > Arr[j+1])
            {
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
            
          }
       }

    }

    void print(int *Arr, int size)
    {
        cout<<"Array in increasing order is : "<<"\n";
        for(int i = 0; i < size; i++)
        {
            cout<<Arr[i]<<"\t";
        }
    }
};

int main()
{
    Increase_Decrease id;

    int size = 0;
    cout<<"Enter size of array : "<<endl;
    cin>>size;

    int Arr[size];
    cout<<"Enter " <<size<< " elements of array :"<< endl;
    for(int i = 0; i < size; i++)
    {
        cin>>Arr[i];
    }

    id.ReArrange(Arr,size);
    id.print(Arr,size);

    return 0;
}