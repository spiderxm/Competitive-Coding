//
// Created by Mrigank Anand on 02/08/20.
//

// divide and conquer algorithm


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

// array is divided into part and then the divided parts are recursively sorted
// divide sort merge
// merging can be done using 2 pointer approach
void merge(int *a, int s, int e) {
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[100];

    while (i <= mid && j <= e) {
        if (a[i] < a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = a[i++];
    }
    while (j <= e) {
        temp[k++] = a[j++];
    }
    for (int l = s; l <= e; ++l) {
        a[l] = temp[l];
    }
    return;
}

void merge_sort(int a[], int s, int e) {
    // s is the starting point and e is the ending point
    if (s >= e) {
        return;
    }
    // 1.Divide
    int mid = (s + e) / 2;
    // recursively sort the two array
    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);
    merge(a, s, e);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    merge_sort(a, 0, n - 1);

    for (int j = 0; j < n; ++j) {
        cout << a[j] << " ";
    }
    return 0;
}