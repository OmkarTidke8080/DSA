// Find the missing nnumber in the array
// optimal (using hashing)

#include<iostream>
#include <vector>
using namespace std;

int missing(vector<int> arr, int size)
{
 
}

int main() 
{
    int iRet = 0;

    int size = 0;

    cout<<"Enter size of array : "<<"\n";
    cin>> size;

    vector<int> arr(size);


    cout<<"Enter elements of array : "<<"\n";
    for(int i = 0; i < size; i++)
    {
        cout<<"Element : "<< i << ":";
        cin>>arr[i];
    }

   iRet =  missing(arr,size);

   cout<<"The missing number is : "<<iRet<<"\n";
    
    return 0;
}