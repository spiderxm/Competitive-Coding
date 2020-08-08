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

void NaiveSearch(string a, string b) { // complexity of O(m*n)
    for (int i = 0; i <= a.size() - b.size(); i++) {
        int j = 0;
        for (j = 0; j < b.size(); ++j) {
            if (a[i + j] != b[j]) {
                break;
            }
        }
        if (j == b.size()) {
            cout << "Pattern found at index position" << i;
            cout << endl;
        }
    }
}

int main() {
    // naive method
    // time complexity is O(n * m)
    // n is size of big array and m is size of small array
    NaiveSearch("abbaabba", "ab");
    return 0;
}
