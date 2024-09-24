#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// odredi sve (proste) delioce broja n, O(sqrt n)

int main () {
    ll n; cin >> n;
    ll knd = 2; // kandidat za prost cinilac
    while ( knd * knd <= n ) { // sqrt
        while ( n % knd == 0 ) {
            cout << knd << ' ';
            n /= knd; // smanji problem
        }
        // kandidat je obradjen...
        knd++;
    }
    if ( n > 1 ) cout << n;
    
    
    

    
    return 0; }