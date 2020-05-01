#include <bits/stdc++.h>

using namespace std;
#define ll long long

#include <iostream>

ll maxIncSubarr(ll a[], ll n) {
    ll pre[n] = {0};
    ll pos[n] = {0};
    pre[0] = 1;
    pos[n - 1] = 1;
    ll l = 0;

    for (ll i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            pre[i] = pre[i - 1] + 1;
        else
            pre[i] = 1;
    }

    l = 1;
    for (ll i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1])
            pos[i] = pos[i + 1] + 1;
        else
            pos[i] = 1;
    }

    ll ans = 0;
    l = 1;
    for (ll i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            l++;
        else
            l = 1;
        ans = max(ans, l);
    }

    for (ll i = 1; i <= n - 2; i++) {
        if (a[i - 1] < a[i + 1])
            ans = max(pre[i - 1] + pos[i + 1], ans);
    }

    return ans;
}

// Driver code
int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << maxIncSubarr(a, n);

    return 0;
}