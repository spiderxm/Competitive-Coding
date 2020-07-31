//
// Created by Mrigank Anand on 31/07/20.
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

int main() {
    //dynamic allocation
    int n;
    cin >> n;
    int *a = new int[n]{0};
    cout << a;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cout << a[i];
    }
    delete[] a; // freeing up the memory
    // we cant make 2d array directly using dynamic memory allocation
    // we can make multiple linear arrays and join them back to back
    int r, c;
    cin >> r, c;
    int **arr;
    arr = new int *[r];
//     create an array of arrays
    for (int j = 0; j < r; ++j) {
        arr[j] = new int[c];
    }
    int val = 1;
    for (int k = 0; k < r; ++k) {
        for (int i = 0; i < c; ++i) {
            arr[k][i] = val;
            val++;
            cout << arr[k][i] << " ";
        }
        cout << endl;
    }
    delete [] arr;
    return 0;


}