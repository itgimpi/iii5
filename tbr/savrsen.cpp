#include <bits/stdc++.h>
using namespace std;
// da li je broj savrsen? BF

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
    if (savrsen(n)) cout << "savrsen";
    else cout << "nije";
    
    return 0; }