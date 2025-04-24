#include <bits/stdc++.h>
using namespace std;
// E W Dijkstra
// tezinski graf
const int INF = INT_MAX;

int main () {
    //ios_
    int n, e; cin >> n >> e;
    vector<vector<pair<int, int>>>veze(n); // u---d---v, d, v
    for (int i = 0; i < e; i++) { // unos
        int poc, kraj, rast;
        cin >> poc >> kraj >> rast;
        veze[poc].emplace_back(kraj, rast);
    }
    int pocetak; cin >> pocetak;
    
    vector<int>rast0(n, INF); // rast. od pocetnog
    rast0[pocetak] = 0; // sam od sebe
    vector<bool>resen(n, false); // Vk, nijedan nije resen
    int brres = 0; // br. resenih

    while ( brres < n ) { // sve dok ima neresenih...
        int najblizi = 0; // indeks najblizeg
        int najmrast = INF; // vrednost najm. rastojanja

        for ( int cvor = 0; cvor < n; cvor++ ) // za sve...
            if ( !resen[cvor] && rast0[cvor] < najmrast ) {
                najblizi = cvor;
                najmrast = rast0[cvor]; }

        resen[najblizi] = true;
        brres++;

        for ( auto s : veze[najblizi] ) { // za svakog suseda najblizeg cvora...
            int cvor, rast;
            tie(cvor, rast) = s;
            if ( !resen[cvor] && najmrast + rast < rast0[cvor] ) // manja vre.
                rast0[cvor] = najmrast + rast;
        }

    }

    for (int i = 0; i < n; i++)
        cout << pocetak << "->" << i << " je " << rast0[i] << '\n';


    return 0; }