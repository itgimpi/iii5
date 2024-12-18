#include <bits/stdc++.h>
using namespace std;
// Реч Франкенштајн

int main () {
    string s; // original
    string f = ""; // frank.
    cin >> s;
    
    int pocetak, duzina;
    while ( cin >> pocetak >> duzina ) {
        //string tmp = s.substr... f += tmp
        f += s.substr(pocetak, duzina);
    }
    cout << f;

    
    
    return 0; }