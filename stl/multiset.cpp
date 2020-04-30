//
// Created by Mrigank Anand on 30/04/20.
//


//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<set>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <algorithm>

#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

ll pow(ll a, ll b) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans = ans * a;
        }
        b = b >> 1;
        a = a * a;
    }
    return ans;
}

using namespace std;

int main() {
    //multi-set can store multiple elements that have same values
    //specific ordering -> sorting according to internal comparison object
    // values ones inserted cant be modified
    // associative container -> elements are referred by their value and not by thr index
    // BST is used to maintain multiset
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 5, 54, 22, 1, 1, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    multiset<int> m(arr, arr + n);
    for (int x:m) {
        cout << x << endl;
    }
    cout << "----------";
    m.erase(1);
    for (int x:m) {
        cout << x << endl;
    }
    m.insert(19);
    m.insert(19);
    cout << m.count(2) << endl;
    auto it = m.find(19);
    cout << *it << endl;
    auto it2 = m.lower_bound(19);
    cout << *it2 << endl;
    auto it3 = m.upper_bound(19);
    cout << *it3 << endl;
    pair<multiset<int>::iterator, multiset<int>::iterator> p = m.equal_range(19);
    for (auto it = p.first; it != p.second; it++) {
        cout << *it << " ";
    }
    return 0;
}