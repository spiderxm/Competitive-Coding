//
// Created by Mrigank Anand on 10/08/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define endl "\n"
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


void ans()
{
    ll n,k;cin>>n>>k;
    vector<ll> v(n);ll a=1;
    for(auto &x:v)cin>>x;
    unordered_set<ll> s;
    s.insert(v[0]);
    for(ll i=1;i<n;i++)
    {
        if(s.count(v[i]))
        {
            a++;s.clear();s.insert(v[i]);
        }
        else s.insert(v[i]);
    }
    cout<<a<<endl;
}


int main()
{
    boost;
    ll t;cin>>t;
    while(t--) ans();
    return 0;
}