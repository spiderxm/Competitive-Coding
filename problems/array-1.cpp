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

using namespace std;

int main() {
    ll a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ll b[10];
    ll i = 0;
    for (auto c:a) {
        if (i > 0) {
            b[i] = c + b[i - 1];
        } else {
            b[i] = c;
        }
        i++;
    }
    for (auto c:b) {
        cout << c << " " << endl;
    }
    ll t;
    cin >> t;
    while (t--) {
        int a1, b1;
        cout << "Enter positions you want to query for sum of array elements between two positions : ";
        cin >> a1 >> b1;
        cout << b[b1] - b[a1];
        cout << endl;
    }


    return 0;
}