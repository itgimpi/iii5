#include <bits/stdc++.h>
using namespace std;
// Судија
// 

int main () {
    ios_base::sync_with_stdio(false);
    int n, e; cin >> n >> e;

    vector<int>ulaz(n+1, 0);
    vector<int>izlaz(n+1, 0);

// ne pamti se graf, pamte se stepeni cvorova
    for (int i = 0; i < e; i++) {
        int u, v; cin >> u >> v;
        //                             u .------->. v
        ulaz[v]++;
        izlaz[u]++;
    }
    int res = -1;
    for (int i = 1; i <= n; i++)
        if ( ulaz[i] == n-1 && izlaz[i] == 0 )
            res = i;
    cout << res;
    return 0; }