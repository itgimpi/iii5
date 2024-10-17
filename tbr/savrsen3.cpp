#include <bits/stdc++.h>
using namespace std;
// svi savrseni od 2 do n? BF

int zbir(int br) {
    int res = 1;
    int i;
    for ( i = 2; i * i < br; i++ )
        if ( br % i == 0 ) {
            res += i;
            res += br / i;
        }
    if (i*i==br) res+=br;
             
    return res; }

bool savrsen(int br) {
    return br == zbir(br); }

int main () {
    int n; cin >> n;
    for (int i = 2; i <= n; i++)
        if (savrsen(i)) cout << i << " je savrsen" << '\n';
    
    
    return 0; }