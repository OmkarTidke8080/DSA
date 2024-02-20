// Sort the array of 0's, 1's and 2's

#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Sort012(int Arr[], int size)
{
  int low = 0;
  int high = size - 1;
  int mid = 0;
 
  while(mid <= high)
  {
    switch (Arr[mid])
    {
    case 0:
          swap(&Arr[low++],&Arr[mid++]);
        break;
    
    case 1:
          mid++;
          break;

    case 2 :
        //  temp2 = Arr[mid];
        // Arr[mid] = Arr[high--];
        // Arr[high--] = temp2;
        swap(&Arr[mid],&Arr[high--]);
        break;

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

    Sort012(Arr,size);
    display(Arr,size);
    

    return 0;
}