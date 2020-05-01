//
// Created by Mrigank Anand on 19/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include <maps>
#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    //Hello world
    ll t;
    cin >> t;
    for (ll j = 0; j < t; j++) {
        ll n;
        cin >> n;
        ll h[n];
        for (ll i = 0; i < n; i++) {
            cin >> h[i];
        }
        ll count = 0;

        for (ll i = 1; i < n - 1; i++) {
            if (h[i] > h[i - 1] && h[i] > h[i + 1]) {
                count++;
            }
        }

        cout << "Case #" << j + 1 << ": " << count << "\n";

    }
    return 0;
}