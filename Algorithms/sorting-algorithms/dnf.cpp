//
// Created by Mrigank Anand on 09/08/20.
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

void dnf(int a[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        if (a[mid] == 1) {
            mid++;
        }
        if (a[mid] == 2) {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

//sort array of 0,1,2 in single pass
int main() {
    int a[] = {1, 0, 1, 1, 1, 0, 0, 0, 1, 2, 2, 2};
    int n = sizeof(a) / sizeof(int);
    dnf(a, n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}