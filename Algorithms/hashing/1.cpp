//
// Created by Mrigank Anand on 06/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

int main() {
    ll n;
    cin >> n;
    set<ll> b;
    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        b.insert(a);
    }
    if(n == b.size()){
        cout << false;
    }else{
        cout << true;
    }
    return 0;
}