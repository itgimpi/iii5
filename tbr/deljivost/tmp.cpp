#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// svi prosti delioci broja

int main () {
    int n; cin >> n;
    int i = 2;

    while ( i * i <= n ) {
        while ( n % i == 0 ) {
            cout << i << ' ';
            n /= i;
        }
        i++;
    }
    if ( n > 1 ) cout << n;
    
  
    return 0; }