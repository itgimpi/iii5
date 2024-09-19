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
        cout << a[i]; } 

int main () {
    int n, b; cin >> n >> b;

    baseb(n, b);
    
    return 0; }