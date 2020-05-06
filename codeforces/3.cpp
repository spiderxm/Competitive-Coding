#include<bits/stdc++.h>
#define ll long long
#define sq(a) (a*a)
#define mp make_pair
#define tp tuple
#define mt make_tuple
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define mod (1000000007)
#define endl "\n"
#define N (10e9+5)
#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
vector<ll> cards();
vector<ll> v=cards();
void test_case();
int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--) test_case();
    return 0;
}

void test_case()
{
    ll n,k=0;cin>>n;
    while(n && n!=1)
    {
        ll i=lb(v.begin(),v.end(),n)-v.begin();
        if(!(binary_search(v.begin(),v.end(),n))) i--;
        n-=v.at(i);k++;
    }
    cout<<k<<endl;
}

vector<ll> cards()
{
    ll i=1;
    vector<ll> v;v.pb(0);
    while(v.at(i-1)<=N)
    {
        if(i==1)v.pb(2);
        else {ll k=((i*2)+(i-1)+v.at(i-1));v.pb(k);}
        i++;
    }
    return v;
}