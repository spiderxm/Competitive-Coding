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
    ll n, k;
    list<ll> a, b;
    ll e;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> e;
        a.push_back(e);
    }
    for (int i = 0; i < k; ++i) {
        int front = a.front();
        a.pop_front();
        b.push_back(front);
    }
    b.reverse();
    for (auto t:b) {
        cout << t << " ";
    }
    for (auto x:a) {
        cout << x << " ";
    }
    return 0;
}