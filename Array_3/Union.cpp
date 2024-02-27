// Linear Search Problem 

#include<iostream>
#include <vector>
#include <bits/stdc++.h> 
#include <set>
using namespace std;

vector<int>  Union(vector<int> Arr1, vector<int> Arr2 ,int size1, int size2)
{
    int n1 = Arr1.size();
    int n2 = Arr2.size();

    set<int> st;
    
    for(int i = 0; i < n1; i++)
    {
         st.insert(Arr1[i]);
    }

    for(int i = 0; i < n1; i++)
    {
         st.insert(Arr2[i]);
    }

    vector<int> temp;
    for(auto it : st)
    {
        temp.push_back(it);
    }

    return temp;

}


int main()
{
    int size1;
    int size2;
    int no;
    int a;

    vector<int>u;

    cout<<"Enter size of array1 : "<<"\n";
    cin>>size1;

    // int Arr1[size1];
    vector<int> Arr1;
    
     cout<<"Enter size of array2 : "<<"\n";
    cin>>size2;

    vector<int> Arr2;

    cout<<"Enter elements of array1 : "<<"\n";
    for(int i = 0; i < size1; i++)
    {
        cin>>a;
        Arr1.push_back(a);
    }

    cout<<"Enter elements of array2 : "<<"\n";
    for(int i = 0; i < size2; i++)
    {
        cin>>a;
        Arr2.push_back(a);
    }

   u =  Union(Arr1, Arr2, size1,size2);
   
   cout<<"Union of two sorted array is : "<<"\n";
   for(int i = 0 ; i < u.size(); i++)
   {
      cout<<u[i]<<" ";
   }

   

    return 0;

}