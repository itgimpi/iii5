#include <bits/stdc++.h>
using namespace std;
// euclid alg

void euclid(int a, int b, int &nzd) {
    int r1 = a; // prvi
    int r2 = b; // drugi
    while ( r2 > 0 ) {
        int q = r1 / r2; // kol.
        // u prvi ide drugi
        int tmp = r1; // zapamti prvi
        r1 = r2; // prvi <- drugi
        //r2 = tmp % r2; // drugi <- ostatak 
        r2 = tmp - q * r2; // malo je brze...
    }
    nzd = r1;

}

int main () {
    int a, b, nzd; cin >> a >> b;
    euclid(a, b, nzd);
    cout << nzd;
    
    return 0; }