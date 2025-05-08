#include <bits/stdc++.h>
using namespace std;
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/usteda_kablova  
// Kruskal
// odredi najmanje stablo, tezinski graf

int main () {
    //ios_base...
    int n, e; cin >> n >> e; // br. cvorova i grana

    vector<tuple<double, int, int>>grane(e);
    for (int i = 0; i < e; i++) {
        int u, v; double d; // od, do, dist
        cin >> u >> v >> d;
        grane[i] = make_tuple(d, u, v); // zbog sort-a
    }
    //3(5-6), 1(2-1), 2(4-3)  rast(od-do) d(u-v)  
    sort(begin(grane), end(grane)); // sort po rastojanjima, od, do
    // 1(1-2), 2(3-4), 3(5-6), ...

    vector<int>grupa(n); // n grupa
    // u grupu 0 ide cvor 0, u g1 ide c1, u g2 ide c2, ...
    for (int i = 0; i < n; i++) grupa[i] = i; // g0, g1, ..., gn-1
    // svaka grupa ima po 1 cvor, svaka veza je moguca

    double res = 0.0; // ukupan zbir duzina kablova
    int brg = 0; // broj grana u stablu, resenju
    // ide od najmanje grane ka vecim...
    for (int i = 0; i < e && brg < n-1; i++) { // sve grane ili n-1
        // iz i-te veze izdvoj d, u, v
        //       0  1  2 
        // tuple(d, u, v)
        int c1 = get<1>(grane[i]); // od
        int c2 = get<2>(grane[i]); // do
        // ako su grupe razlicite, unija
        if ( grupa[c1] != grupa[c2] ) { // razl. grupe
            // svi g1 prelaze u g2
            int g1 = grupa[c1];
            int g2 = grupa[c2];
            for (int j = 0; j < n; j++) {
                if (grupa[j]==g1) // ako pripada prvoj
                    grupa[j] = g2; // prelazi u drugu
            }
            double duz = get<0>(grane[i]);
            res += duz;
            brg++;

        }

    }

    cout << fixed << showpoint << setprecision(1) << res;


    return 0; }