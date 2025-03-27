#include <bits/stdc++.h>
using namespace std;
// directed graph
// DFS using stack + vector

void dodaj(int u, int v, vector<vector<int>> &veze) {
    veze[u].push_back(v); }

void dfs(int c, const vector<vector<int>> &veze, vector<bool> &posecen) {
    stack<int>stek;
    stek.push(c); // pocetni cvor ide na stek
    posecen[c] = true; // posecen je

    while ( !stek.empty() ) { // sve dok ima nesto na steku...
        int cvor = stek.top(); // uzmi sa vrha steka
        stek.pop(); // i skloni
        cout << cvor << ' ';
        for ( auto s : veze[cvor] ) // za sve susede...
            if ( !posecen[s] ) { // ako nisu poseceni
                posecen[s] = true;
                stek.push(s);
            }
    }

    return;
}

int main () {
    int nc = 5; // number of nodes, cin >>
    //int ne = 5; // number of edges

    vector<vector<int>>veze;
    veze.resize(nc);
    vector<bool>posecen;
    posecen.resize(nc, false);

    dodaj(0, 1, veze);
    dodaj(0, 2, veze);
    dodaj(1, 3, veze);
    dodaj(2, 3, veze);
    dodaj(3, 4, veze);

    dfs(0, veze, posecen); // pokreni dfs iz cvora, npr. iz 0

    return 0; }