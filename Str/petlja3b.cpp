#include <bits/stdc++.h>
using namespace std;
// Реч Франкенштајн

int main () {
    string s; // original

    cin >> s;
    int pocetak, duzina;
    while ( cin >> pocetak >> duzina ) 
        cout << s.substr(pocetak, duzina);



    
    
    return 0; }