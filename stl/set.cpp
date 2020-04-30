//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair

#include <set>

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
    // only key values
    // unique elements
    // elements cant be updated they can be deleted then insert again
    // works on the concept of tree
    int arr[] = {1, 2, 2, 2, 2, 4, 44, 3, 2, 2, 22, 78, 8, 9, 90, 0, 0, 000, 6666, 444};
    set<int> a; // by default ordered in asc.
    int n = sizeof(arr) / sizeof(int);
    while (n--) {
        a.insert(arr[n - 1]);
    }
    for (auto u: a) {
        cout << u << endl;
    }
    a.insert(10);
    a.erase(2);
    for (auto u: a) {
        cout << u << endl;
    }

    auto it = a.find(10);
    a.erase(it);
    for (auto u: a) {
        cout << u << endl;
    }
    //It accepts both iterator and values

    set<pair<int, int>> b;
    b.insert(mp(1, 2));
    b.insert(mp(2, 2));
    b.insert(mp(10, 2));
    b.insert(mp(0, 2));
    b.insert(mp(1, 0));
    b.insert(mp(1, 3));
    b.insert(mp(1, 4));
    b.insert(mp(5, 2));
    b.insert(mp(6, 2));
    for (auto o:b) {
        cout << o.first << " : " << o.second << endl;
    }
    cout << "------------------" << endl;
    b.erase(mp(0, 1));
    b.erase(mp(1, 0));
    for (auto o:b) {
        cout << o.first << " : " << o.second << endl;
    }
    cout << "------------------" << endl;

    auto it1 = b.lower_bound(mp(2, 2));
    cout << it1->first << " : " << it1->second << endl;
    cout << "------------------" << endl;

    auto it2 = b.upper_bound(mp(2, 2));
    cout << it2->first << " : " << it2->second << endl;
    cout << "------------------" << endl;
    auto it4 = b.upper_bound(mp(9, INT_MAX));
    cout << it4->first << " : " << it4->second << endl;


    return 0;
}