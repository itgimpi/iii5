#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
//typedef uint64_t ull;
typedef unsigned __int128 ulll;
// 16B,opseg 2 na 40, ne mogu da se ispisuju

/*
//       osnova, stepen, moduo, O( log n )
ulll stepen3(ull a, ull n, ull m) { // (a * a) % m = ( a % m ) * ( a % m ) % m 
    if ( n==0 ) return 1;
    if ( n % 2 == 0 ) // stepen je par
        return (stepen( (ulll) ((ulll) (a % m) * (ulll) (a % m)), n/2, m )  * stepen( (ulll)((ulll)(a % m) * (ulll)(a % m)), n/2, m )) % m;
    // nepar, a^n = a * a^(n-1)
    return ((a % m) * stepen(a, n-1, m)) % m;

}


//       osnova, stepen, moduo, O( log n )
ull stepen2(ull a, ull n, ull m) { // (a * a) % m = ( a % m ) * ( a % m ) % m 
    if ( n==0 ) return 1;
    if ( n % 2 == 0 ) // stepen je par
        return (stepen( (a % m) * (a % m), n/2, m )  * stepen( (a % m) * (a % m), n/2, m )) % m;
    // nepar, a^n = a * a^(n-1)
    return (a % m * stepen(a, n-1, m)) % m;

}
*/
ulll stepen(ull a, ull n, ull m) {
  if (n == 0)
    return 1;
  if (n % 2 == 0)
    return (stepen(((ulll)(a % m) * (ulll)(a % m)) % m, n/2, m)) % m;
  return ((a % m)*stepen(a, n-1, m)) % m;
}

bool ferma( ull p, int k ) {
    if ( p == 1 ) return false; // 1 nije prost
    if ( p == 2 || p == 3 ) return true; // 2, 3 su prosti
    // if ( p % 2.... p % 3 ... ) eventualno

    default_random_engine gen; // ravnomerna raspodela sl. brojeva
    uniform_int_distribution<unsigned>dist(2, p-2); // od 2 do p-2

    for ( int i = 0; i < k; i++ ) { // k x, 10, 100, 1000 puta
        ull a = dist(gen); // a je od 2 do p-2
        if ( stepen(a, p-1, p) != 1 ) // a na p-1 % p == 1?
            return false; }
        return true; }


int main () {
    ull x;
    //cout << stepen2(2, 10, 1000000);
    while ( cin >> x)
        // if (ferma(x, 100))
        if (ferma(x, 100)) // provera pomocu fermaove teoreme
            cout << x << '\n';
    
    
    return 0; }