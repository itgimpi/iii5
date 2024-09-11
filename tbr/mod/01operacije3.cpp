#include <bits/stdc++.h>
using namespace std;
// Операције по модулу

int zbirmod( int a, int b, int m ) {
    return (a % m + b % m) % m; }

int promod( int a, int b, int m ) {
    return (a % m * b % m) % m; }

int main () {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int m = 1000;
    cout << zbirmod( zbirmod(a, b, m), zbirmod(c, d, m), m ) << '\n';
    cout << promod( promod(a, b, m), promod(c, d, m), m ) << '\n';

    
    return 0; }