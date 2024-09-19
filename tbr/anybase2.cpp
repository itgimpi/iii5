#include <bits/stdc++.h>
using namespace std;
// n to any base

void baseb(int n, int b) {
    int q = n;
    int k = 0;
    int a[100];
    while ( q != 0 ) {
        a[k] = q % b;
        q /= b;
        k++; }

    for (int i = k-1; i >= 0; i--)
        cout << a[i]; 
    cout << '\n'; } 

vector<int> f(int n, int b) {
    vector<int>a;
    while ( n ) { // in C / C++ n means n != 0
        a.push_back( n % b );
        n /= b; }
    reverse(a.begin(), a.end());
    return a; }

int main () {
    int n, b; cin >> n >> b;

    baseb(n, b);
    vector<int>res = f(n, b);
    for ( int i = 0; i < res.size(); i++ )
        cout << res[i];
    
    return 0; }