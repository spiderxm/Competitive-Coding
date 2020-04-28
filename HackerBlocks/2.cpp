//
// Created by Mrigank Anand on 28/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll t = 1;
    ll ans = 0;
    ll length = 0;
    while (n > 0) {
        ans = ans + (n % 10) * t;
        n = n / 10;
        t = t * 2;
    }
    cout << ans << endl;
    return 0;
}