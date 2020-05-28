//
// Created by Mrigank Anand on 29/05/20.
//
//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include <algorithm>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;


void bubble_sort_desc(long long int a[], ll n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

void bubble_sort_asc(long long int a[], ll n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll &x : a) {
        cin >> x;
    }
    bubble_sort_asc(a, n);
    cout << "Sorted array in ascending order  is " ;
    for (ll x: a) {
        cout << x << " ";
    }
    cout << endl;
    bubble_sort_desc(a, n);
    cout << "Sorted array in descending order  is ";
    for (ll x: a) {
        cout << x << " ";
    }
    return 0;
}
