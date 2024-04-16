// replace eaxh elements by its rank in the array 

#include<iostream>
#include <vector>
#include <climits>
#include <set>
using namespace std;

class Rotate
{
    public :

void rank(vector<int> arr, int size)
{
   for(int i = 0 ; i < size; i++)
   {
       set<int>s;
       for(int j = 0 ; j < size; j++)
       {
        if(arr[j] < arr[i])
        {
            s.insert(arr[j]);
        }
        
       }

       cout<< s.size() + 1 <<" ";
   }


}
};

int main()
{
    Rotate rt;

    int size = 0;
    cout<<"Enter size of array : "<<endl;
    cin>>size;

    int element = 0;

    vector<int> Arr;

    cout<<"Enter " <<size<< " elements of array :"<< endl;
    for(int i = 0; i < size; i++)
    {
        cin>>element;
        Arr.push_back(element);

    }

     rt.rank(Arr,size);


    return 0;
}