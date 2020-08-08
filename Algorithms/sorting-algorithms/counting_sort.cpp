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
    int smallest = *min_element(arr, arr + n);
    int *freq = new int[largest - smallest + 1];
    for (int i = 0; i < n; ++i) {
        freq[(arr[i] - smallest)] = freq[(arr[i] - smallest)] + 1;
    }
    ll i = 0;

    for (int j = smallest; j <= largest; ++j) {
        int a = freq[j - smallest];
        while (a > 0) {
            arr[i] = j;
            i++;
            a--;
        }
    }
    delete[] freq;
}

// in counting sort we sort the elements by adding them preseence in an array and then printing them one by one this is good when max and min of the array are in a short range
int main() {
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8, -3};
    int n = sizeof(arr) / sizeof(int);
    // useful in small range
    // we should have numbers in range a and b
    countSort(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}