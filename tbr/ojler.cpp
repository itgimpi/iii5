#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// euler's function phi

int phi(int n) { // O(n log n)
    // broj brojeva od 1 do n, tako da je nzd(broj, n) == 1
    int br = 0;
    for (int i = 1; i <= n; i++)
        if ( __gcd(i, n) == 1 )
            br++;
    return br;
}

int main () {
    int n; cin >> n;
    cout << phi(n);
    
    return 0; }