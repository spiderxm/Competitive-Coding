//
// Created by Mrigank Anand on 02/09/20.
//

//
// Created by Mrigank Anand on 02/09/20.
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
    list<ll> a;
    ll n, e;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> e;
        a.push_back(e);
    }
//    7
//    1 2 2 1 8 5 6
//    4
    ll k;
    cin >> k;
    if (a.size() == k) {
        a.reverse();
    } else {
        if(k > a.size()){
            k = k % a.size();
        }
        while (k) {
            k--;
            ll f = a.back();
            a.pop_back();
            a.push_front(f);
        }
    }
    for (auto t:a) {
        cout << t << " ";
    }
    return 0;
}