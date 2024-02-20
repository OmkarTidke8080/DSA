// Remove duplicates from sorted array  in place

#include<iostream>
using namespace std;


// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void RemoveDuplicates(int Arr[], int size)
{
    Set<int> st;

    for(int i = 0 ; i < size; i++)
    {
        st.insert(Arr[i]);
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

    RemoveDuplicates(Arr,size);
    display(Arr,size);
    

    return 0;
}