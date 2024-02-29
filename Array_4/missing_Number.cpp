// Find the missing nnumber in the array 

#include<iostream>
#include <vector>
using namespace std;

int missing(vector<int> arr, int size)
{
    int flag = 0;

    for(int i = 1; i <= size; i++)
    {
        flag = 0;
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            return i;
        }
    }
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