//
// Created by Mrigank Anand on 10/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n;
        cin>>k;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<a[k];
        cout<<endl;
    }
    return 0;
}