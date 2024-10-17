#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// euclid alg

void euclid(ll a, ll b, ll &s, ll &t) {
    ll r1 = a, r2 = b, tmp;
    ll s1 = 1, s2 = 0; // 
    ll t1 = 0, t2 = 1;

    while ( r2 > 0 ) {
        ll q = r1 / r2;

        cout << "r1 = " << r1 << ", r2 = " << r2 << endl;
        tmp = r1;
        r1 = r2;
        r2 = tmp - q * r2; // r2 = tmp % r2

        cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
        tmp = s1;
        s1 = s2;
        s2 = tmp - q * s2; // r2 = tmp % r2    

        cout << "t1 = " << t1 << ", t2 = " << t2 << endl;
        tmp = t1;
        t1 = t2;
        t2 = tmp - q * t2; // r2 = tmp % r2  
    }
    s = s1;
    t = t1; 
    

}

int main () {
    ll a, b, s, t; cin >> a >> b;
    euclid(a, b, s, t);
    cout << s << ' ' << t;    
    
    return 0; }