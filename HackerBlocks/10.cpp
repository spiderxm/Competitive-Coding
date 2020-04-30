//
// Created by Mrigank Anand on 30/04/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<iostream>
#include<stack>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
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
    ll n;
    cin >> n;
    stack<int> a;
    while (n--) {
        ll t;
        cin >> t;
        if (t == 1) {
            if (!a.empty()) {
                cout << a.top() << endl;
                a.pop();
            } else {
                cout << "No Code" << endl;
            }
        } else {
            ll b;
            cin >> b;
            a.push(b);
        }
    }
    return 0;
}