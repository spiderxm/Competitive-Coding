//
// Created by Mrigank Anand on 27/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

#define ll long long

#include <algorithm>

#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

bool comp(int a, int b) {
    return a <= b;
}

void bubble_sort_desc(int *arr, int n, bool (&comp)(int, int)) {
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (comp(arr[i], arr[j])) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(int);

    int k = 5;
    auto it = find(arr, arr + n, k); // returns the address of the element position
    if (it - arr < n) {
        cout << arr[it - arr] << endl;
    } else {
        cout << "element not present" << endl;
    }


    //Binary Search
    bool present = binary_search(arr, arr + n, k);
    if (present) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element not present";
    }

    // Get the index of the element
    auto it1 = lower_bound(arr, arr + n, k); //returns the address of first occurence of k
    cout << arr[it1 - arr] << endl;
    auto it2 = upper_bound(arr, arr + n, k); // O(logn) time
    if (it2 - arr < n) {
        cout << arr[it2 - arr] << endl;
    } else {
        cout << "upper bound not present" << endl;
    }
    cout << "occurences of k is : " << it2 - it1 << endl; // O(logn) time

    int a[10] = {1, 3, 2, 1, 4, 5, 4, 2, 1, 6};
    sort(a, a + 10);
    for (int o:a) {
        cout << o << " ";
    }
    sort(a, a + 10, compare);
    cout << endl;
    for (int o : a) {
        cout << o << " ";
    }
    cout << endl;

    // Comparators
    int abc[] = {1, 2, 3, 4, 5, 12, 34, 12, 34, 5, 6, 7, 77, 65};
    bubble_sort_desc(abc, 14, compare);
    for (auto b : abc) {
        cout << b << " ";
    }


    // money change problem can be solved using lower_bound
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};
    int money = 200;
    while (money > 0) {
        auto lb = lower_bound(coins, coins + 7, money, comp) - coins - 1;
        cout << endl;
        int m = coins[lb];
        cout << m << endl;
        money -= m;
    }
    int b[] = {10, 20, 30, 40, 50};
    rotate(b, b + 2, b + 5);
    for (auto r :b) {
        cout << r << " ";
    }
    cout << endl;
    vector<int> v = {1, 2, 3, 4, 5, 6};
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    //gives the next permutation
    for (auto t:v) {
        cout << t << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());
    for (auto t:v) {
        cout << t << " ";
    }

    pair<int, char> l;
    l.first = 18;
    l.second = 'm';
    cout << l.first << endl;
    cout << l.second;

    pair<int, string> l2 = make_pair(18, "mrigank");
    cout << l2.first << " " << l2.second << endl;
    return 0;
}

