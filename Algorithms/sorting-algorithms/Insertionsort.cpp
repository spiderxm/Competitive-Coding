//
// Created by Mrigank Anand on 02/07/20.
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

void insertion_sort(ll a[], ll n) {
    ll key, j, i;
    for (i = 1; i < n; ++i) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void insertion_sort_descending(ll a[], ll n) {
    ll key, j, i;
    for (i = 1; i < n; ++i) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll &x: a) {
        cin >> x;
    }
    insertion_sort(a, n);
    cout << "Sorted array in ascending order is : ";
    for (ll x: a) {
        cout << x << " ";
    }
    insertion_sort_descending(a, n);
    cout << endl;
    cout << "Sorted array in descending order is : ";
    for (ll x: a) {
        cout << x << " ";
    }
    return 0;
}
