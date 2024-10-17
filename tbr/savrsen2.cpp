#include <bits/stdc++.h>
using namespace std;
// svi savrseni od 2 do n? BF

int zbir(int br) {
    int res = 1;
    for ( int i = 2; i < br; i++ )
        if ( br % i == 0 )
            res += i; 
    return res; }

bool savrsen(int br) {
    return br == zbir(br); }

int main () {
    int n; cin >> n;
    for (int i = 2; i <= n; i++)
        if (savrsen(i)) cout << i << " je savrsen" << '\n';
    
    
    return 0; }