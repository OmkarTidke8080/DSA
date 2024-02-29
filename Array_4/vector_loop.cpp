#include<iostream>
#include<vector>
using namespace std;


int main()
{
    // vector<int> v(5); // for array define size first
    vector<int> v;

    cout<<"Enter 5 elements : "<<"\n";

    // for loop
    for(int i =0; i < 5; i++)
    {
        int element ;
        cin>>element;
        v.push_back(element);   // cin>>arr[i]; // in arrays
    }


    //  // array method
    // for(int i =0; i < 5; i++)
    // {
    //     // int element ;
    //     cin>>v[i];
    //     // v.push_back(element);   // cin>>arr[i]; // in arrays
    // }
  
    // for loop
    cout<<"Elements of array are : "<<"\n";
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2, 6);

    // for each loop
    for(int element: v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);


    // while loop
    int idx = 0;

    while(idx < v.size())
    {
        cout<<v[idx++]<<" ";
    }
    cout<<endl;

    


    return 0;

}