#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Модуларни инверз, https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/modularni_inverz
// BF1

bool provera(ull primljen, ull kljuc, ull mod, ull &poslat) {
    // (poslat * kljuc) % mod == primljen
    // (poslat % mod * kljuc % mod) % mod == primljen
    kljuc %= mod; // ne smeta
    for ( poslat = 0; poslat < mod; poslat++ ) {
        if ( (poslat * kljuc) % mod == primljen )
            return true;
    }
    return false; // nepotrebno za ovaj zadatak
}

int main () {
    ull kljuc, mod; cin >> kljuc >> mod;

    ull primljen;
    while ( cin >> primljen ) {
        ull poslat;
        provera(primljen, kljuc, mod, poslat);
        cout << poslat << '\n'; }
   
    
    return 0; }