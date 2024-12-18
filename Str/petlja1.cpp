#include <bits/stdc++.h>
using namespace std;
// Презиме па име

int main () {
    string s; // za unos, sadrzi i razmak
    string ime, prezime; // za obradu
    while( getline(cin, s) ) { // dok ima..., uzmi ceo red, sa razmakom
        int p = s.find(' '); // pozicija razmaka
        //po pravilu...
        if ( p != string::npos ) { // da li postoji, ovde nije neophodno
            ime = s.substr(0, p); // napravi novi string od poc. sa duz.
            prezime = s.substr(p + 1, s.size() - ime.size() - 1);
            cout << prezime << ' ' << ime << '\n'; } }

    
    return 0; }