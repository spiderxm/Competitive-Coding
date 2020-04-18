//
// Created by Mrigank Anand on 10/04/20.
//
#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms you want in your vector: ";
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.pb(b);

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";       //printing the elements of vector using direct accessing the index
    cout<<endl;
    for(auto i=a.begin();i!=a.end();++i)
        cout<<*i<<"\n";              //printing the elements of vector using iterators
    cout<<endl;

    cout<<*(a.data());   // it prints the first element of the vector
    cout<<endl;
}