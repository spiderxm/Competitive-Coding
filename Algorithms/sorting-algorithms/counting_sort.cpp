//
// Created by Mrigank Anand on 04/08/20.
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

void countSort(int arr[], int n) {
    int largest = *max_element(arr, arr + n);
    int smallest = *min_element(arr, arr+n);
    int *freq = new int [largest-smallest+1]{0};

    for (int i = 0; i < n; ++i) {
        freq[a[i]]++
    }
}

int main() {
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    // useful in small range
    // we should have numbers in range a and b
    countSort(arr, n);
    return 0;
}