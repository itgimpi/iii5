#include <bits/stdc++.h>
using namespace std;
// Floyd Warshall
// 

vector<vector<int>> fw(const vector<vector<int>>&d) {
    int n = d.size();
    vector<vector<int>>naj = d;

    for (int i = 0; i < n; i++) // od
        for (int j = 0; j < n; j++) // do
            for (int k = 0; k < n; k++) // preko
                if ( naj[i][k] + naj[k][j] < naj[i][j] )
                    naj[i][j] = naj[i][k] + naj[k][j];
    return naj;

}

int main () {
    //ios_
    int n; cin >> n;
    vector<vector<int>>dir(n);
    for (int i = 0; i < n; i++) {
        dir[i].resize(n);
        for (int j = 0; j < n; j++)
            cin >> dir[i][j];
    }

    vector<vector<int>> res = fw(dir);

    for (int i = 0; i < n; i++) {
        dir[i].resize(n);
        for (int j = 0; j < n; j++)
            cout <<  dir[i][j] - res[i][j] << ' ';
        cout << '\n';
    }
    

    return 0; }