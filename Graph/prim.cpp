#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/usteda_kablova  
// Prim
// odredi najmanje stablo, tezinski graf
const double INF = numeric_limits<double>::infinity();

int main () {
    //ios_base...
    int n, e; cin >> n >> e;
    //                 rast    do
    vector<vector<pair<double, int>>>veze(n); // u---d---v, d, v
    for (int i = 0; i < e; i++) { // unos
        int u, v; double duz;
        cin >> u >> v >> duz;
        veze[u].emplace_back(duz, v);
        veze[v].emplace_back(duz, u); }

    double res = 0.0; // uk. duzina kablova za resenje

    vector<double>rast(n, INF); // rastojanje cvorova od stabla
    vector<bool>pripada(n, false);

    rast[0] = 0.0; // izbor pocetnog cvora, npr. cvor 0
    int br = 0; // br. cvorova u stablu

    while ( br < n ) { // za sve cvorove...
        // odredi indeks najblizeg cvora
        int najc; // indeks najblizeg cvora
        double najr = INF; // vrednost najmanjeg rastojanja
        for ( int c = 0; c < n; c++ ) { // nadji najblizi
            // ako ne pripada stablu a blizi je...
            if ( !pripada[c] && rast[c] < najr ) {
                najc = c;
                najr = rast[c];
            }
        }
        // sad je odredjen najblizi cvor
        pripada[najc] = true; // pripada stablu
        br++; // br. cvorova u stablu
        res += najr; // rastojanje ide u resenje
        rast[najc] = 0.0; // cvor u stablu je na rastojanju 0 od stabla 
        // za sve prve komsije odabranog cvora, v
        for ( auto v : veze[najc] ) {
            
            if (v.first < rast[v.second])
                rast[v.second] = v.first;  }



    }
    cout << fixed << showpoint << setprecision(1) << res;


    return 0; }