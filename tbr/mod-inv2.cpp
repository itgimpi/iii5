#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Модуларни инверз, https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/modularni_inverz
// BF2
// (poslat * kljuc) % mod = primljen / * kljuc^-1
// poslat = primljen * kljuc^-1
// odredi kljuc^-1 (inverz od kljuc-a)

bool inverz(ull kljuc, ull mod, ull &inv) {
    kljuc %= mod;
    for ( inv = 0; inv < mod; inv++ ) 
        if ( (kljuc * inv) % mod == 1 )
            return true;
    return false; }

int main () {
    ull kljuc, mod; cin >> kljuc >> mod;
    ull inv_kljuc;
    inverz(kljuc, mod, inv_kljuc);
    ull primljen;
    while ( cin >> primljen ) {

        cout << (primljen * inv_kljuc) % mod << '\n'; }
   
    
    return 0; }