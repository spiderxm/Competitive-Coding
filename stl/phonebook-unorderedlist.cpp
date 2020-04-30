//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<vector>
#include<unordered_map>

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
    unordered_map<string, vector<string>> a;
    ll n;
    cin >> n;
    while (n--) {
        string ab;
        cout << "Enter name : ";
        cin >> ab;
        string n;
        cout << "Enter Phonenumber : ";
        cin >> n;
        a[ab].push_back(n);
    }

    for (auto v :a) {
        cout << "Name : " << v.first << endl << "His phone numbers are : " << endl;
        for (auto y:v.second) {
            cout << y << endl;
        }
    }
    for (auto v :a) {
        cout << "Name : " << v.first << endl;
    }
    cout << "Enter name : ";
    string name;
    cin >> name;
    if (a.count(name)) {
        cout << "Present ";
    } else {
        cout << "Not present";
    }

    return 0;
}