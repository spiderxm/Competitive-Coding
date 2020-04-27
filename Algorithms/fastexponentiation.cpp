//
// Created by Mrigank Anand on 27/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
          ans = ans * a;
        }
        b = b >> 1;
        a = a * a;
    }
    return ans;
}
// computes the power in log(n) time

int main() {
    ll a, n;
    cin >> a >> n;
    cout << pow(a, n);
    return 0;
}