#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// extended euclid alg (BEZUOVI KOEF.)

void euclid(ull a, ull b, ull &s, ull &t) {
    ull r1 = a; // prvi
    ull r2 = b; // drugi
    ull s1 = 1, s2 = 0;
    ull t1 = 0, t2 = 1;
    while ( r2 > 0 ) {
        ull q = r1 / r2; // kol.

        //cout << r1 << ' ' << r2 << endl;
        ull tmp = r1; // zapamti prvi
        r1 = r2; // prvi <- drugi
        r2 = tmp - q * r2; // malo je brze...
        
        tmp = s1; // 
        s1 = s2; // 
        s2 = tmp - q * s2; //    
        
        tmp = t1; // 
        t1 = t2; // 
        t2 = tmp - q * t2; //            
    }
    s = s1; t = t1; 

}

int main () {
    ull a, b, s, t; cin >> a >> b;

    euclid(a, b, s, t);
    cout << s << ' ' << t;
    
    return 0; }