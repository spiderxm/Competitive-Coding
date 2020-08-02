//
// Created by Mrigank Anand on 02/08/20.
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
// Divide and conquer problem
// nlogn on avg case
// n^2 on worst case

/*
 * 1.) chose pivot element
 * 2.) divide across the pivot element
 * 3.) Sort recursively the two parts divided across the pivot element
 */
// Divide and Conquer algorithm.
int partition(int *a, int s, int e) {
    int j = s;
    int i = s - 1;
    int pivot = a[e];

    for (; j <= e-1; j++) {
        if (a[j] <= pivot) {
            // merge the smaller element in the region i
            i = i + 1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[e]);
    return i + 1;

}

void quick_sort(int a[], int s, int e) {
    // base case
    if (s >= e) {
        return;
    }
    int p = partition(a, s, e);
    quick_sort(a, s, p - 1);
    quick_sort(a, p + 1, e);
    //recursive case
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; ++j) {
        cin >> a[j];
    }
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}