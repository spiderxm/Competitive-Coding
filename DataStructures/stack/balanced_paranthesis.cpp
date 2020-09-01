//
// Created by Mrigank Anand on 01/09/20.
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
    stack<char> a;
    string b;
    cin >> b;
    for (int i = 0; i < b.length(); ++i) {
        char s = b[i];
        if (s == '(' || s == '[' || s == '{') {
            a.push(s);
        } else if (a.empty()) { // stack can't be empty in between for any closing tag
            cout << "No";
            exit(0);
        } else if (s == ')') {
            if (a.top() != '(' || a.empty()) {
                cout << "No";
                exit(0);
            }
            a.pop();
        } else if (s == ']') {
            if (a.top() != '[' || a.empty()) {
                cout << "No";
                exit(0);
            }
            a.pop();

        } else if (s == '}') {
            if (a.top() != '{' || a.empty()) {
                cout << "No";
                exit(0);
            }
            a.pop();
        }
    }
    if (a.empty()) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
