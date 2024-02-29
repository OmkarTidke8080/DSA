#include<iostream>
#include<vector>
using namespace std;


int main()
{
    // vector<int> v(5); // for array define size first
    vector<int> v(6);

    cout<<"Enter 6 element of array : "<<"\n";
    for(int i = 0; i < 6; i++)
    {
        cin>>v[i];
    }

    int x;
    cout<<"Enter x : "<<endl;
    cin>>x;

    int occurence = -1;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == x)
        {
          occurence = i;
        }
    }

    cout<<occurence<<endl;
 
    

    


    return 0;

}