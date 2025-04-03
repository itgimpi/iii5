#include <bits/stdc++.h>
using namespace std;
// Најпопуларнији сајт
// 

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;
    vector<int>ulaz(n, 0);
    vector<int>izlaz(n, 0);
    
// ne pamti se graf, pamte se stepeni cvorova
    for (int i = 0; i < e; i++) {
        int u, v; cin >> u >> v;
        // u .------->. v
        if ( u != v ) {
            ulaz[v]++;
            izlaz[u]++;
        }

    }
    int ind = -1;
    int najraz = -1;

    for (int i = 0; i < n; i++)
        if ( ulaz[i] - izlaz[i] > najraz ) {
            ind = i;
            najraz = ulaz[i] - izlaz[i]; }


    cout << ind << ' ' << ulaz[ind] - izlaz[ind];
    return 0; }