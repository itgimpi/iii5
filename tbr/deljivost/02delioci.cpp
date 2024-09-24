#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// odredi sve (prave) delioce broja n, O(n)
vector<ll> delioci(ll n) {
    vector<ll>d;
    d.push_back(1);
    if (n > 1) d.push_back(n);
    for ( ll i = 2; i < n; i++ )
        if ( n % i == 0 ) // deljivi?
            d.push_back(i);
    return d; }

int main () {
    ll n; cin >> n;
    
    vector<ll>res = delioci(n);
    cout << res.size() << '\n';
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
    

    
    return 0; }