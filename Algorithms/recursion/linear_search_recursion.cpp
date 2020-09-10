//
// Created by Mrigank Anand on 09/09/20.
//

//
// Created by Mrigank Anand on 08/09/20.
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

int linear_search(int a[], int n, int key) {
    if (n == 0) {
        return -1;
    }
    if (a[0] == key) {
        return 0;
    }
    int i = linear_search(a + 1, n - 1, key);
    if (i == -1) {
        return -1;
    } else {
        return i + 1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 7, 6, 4, 32};
    int key = 7;
    int n = sizeof(arr) / sizeof(int);
    cout << linear_search(arr, n, key) << endl;
    return 0;
}