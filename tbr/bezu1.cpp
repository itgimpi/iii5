#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// euclid alg, ull

void euclid(ull a, ull b, ull &nzd) {
    ull r1 = a; // prvi
    ull r2 = b; // drugi
    while ( r2 > 0 ) {
        ull q = r1 / r2; // kol.

        cout << r1 << ' ' << r2 << endl;
        ull tmp = r1; // zapamti prvi
        r1 = r2; // prvi <- drugi
        r2 = tmp - q * r2; // malo je brze...
    }
    nzd = r1;

}

int main () {
    ull a, b, nzd; cin >> a >> b;
    euclid(a, b, nzd);
    cout << nzd;
    
    return 0; }