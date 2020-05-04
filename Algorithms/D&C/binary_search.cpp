//
// Created by Mrigank Anand on 04/05/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
#include<math.h>
#include<map>
#include<set>
#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

bool binarysearch(ll a[], ll n, ll k) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == k) {
            return true;
        }
        if (a[mid] > k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ll k;
    cout << "enter a number you want to find : --- ";
    cin >> k;
    if(binarysearch(a, n, k) > 0){
        cout << "Element found " << endl;
    } else
        cout << "Element not found";
    return 0;
}