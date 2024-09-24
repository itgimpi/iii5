#include <bits/stdc++.h>
using namespace std;
// da li su dva broja medjusobno deljiva?

int main () {
    int a, b; cin >> a >> b;
    if ( a % b == 0 || b % a == 0) cout << "deljivi";
    else cout << "nisu";

    
    return 0; }