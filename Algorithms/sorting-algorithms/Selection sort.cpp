//
// Created by Mrigank Anand on 01/07/20.
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

// complexity : O(n^2)
void selection_sort(ll a[], ll n) {
    ll min;
    for (int i = 0; i < n; ++i) {
        min = i; // minimum index for the current loop
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

void selection_sort_descending(ll a[], ll n) {
    ll max;
    for (int i = 0; i < n; ++i) {
        max = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[max] < a[j]) {
                max = j;
            }
        }
        swap(a[max], a[i]);
    }
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll &x:a) {
        cin >> x;
    }
    selection_sort(a, n);
    cout << "sorted array in ascending order is : ";
    for (int x:a) {
        cout << x << " ";
    }
    cout << endl;
    selection_sort_descending(a, n);
    cout << "sorted array in descending order is : ";
    for (int x:a) {
        cout << x << " ";
    }
    return 0;
}


// Concept The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
//
// 1) The subarray which is already sorted.
// 2) Remaining subarray which is unsorted.
//
// In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.