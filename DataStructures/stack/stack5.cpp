//
// Created by Mrigank Anand on 31/08/20.
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
    char s[] = "((a+b)+(c-d+f))";
    stack<char> a;
    bool ans = true;
    for (int i = 0; i < s[i] != NULL; ++i) {
        char ch = s[i];
        if (ch == ')') {
            if (a.empty() or a.top() != '(') {
                ans = false;
                break;
            }
            a.pop();
        } else if (ch == '(') {
            a.push(ch);
        }
    }
    if (a.empty() && ans == true) {
        cout << "YES";
    } else
        cout << "NO";
    return 0;
}
