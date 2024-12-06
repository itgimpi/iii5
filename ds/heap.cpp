#include <bits/stdc++.h>
using namespace std;
// Heap using vector

void nagore (vector<int>&hip, int k) {
    int r = ( k - 1 ) / 2; // roditelj

    if ( k > 0 && hip[k] > hip[r]) { // nije koren i veci je od roditelja...
        swap(hip[k], hip[r]);
        nagore(hip, r); } }

void nadole(vector<int>&hip, int k) {
    int naj = k;
    int l = 2 * k + 1;
    int d = 2 * k + 2;

    if ( l < hip.size() && hip[l] > hip[naj]) // u hipu i levi > reditelja...
        naj = l; 
    if ( d < hip.size() && hip[d] > hip[naj])
        naj = d;
    // indeks naj ima indeks najveceg od 3 el.

    if ( naj != k ) { // neki potomak je veci...
        swap(hip[k], hip[naj]);
        nadole(hip, naj); }  
}

void izbaci( vector<int>&hip ) { // izbaci koren
    hip[0] = hip.back(); // u koren ide zadnji el. iz hipa
    hip.pop_back();// izbaci ga
    nadole(hip, 0); }

void ubaci( vector<int>&hip, int el ) {
    hip.push_back(el); // dodaj novi el. na kraj vektora
    nagore(hip, hip.size()-1); }



void ispis(vector<int>&hip) {
    for (int i = 0; i < hip.size(); i++)
        cout << hip[i] << ' ';
    cout << endl;

}

int main() {
    vector<int>hip;
    int n; cin >> n;

    while (n--) {
        int el; cin >> el;
        ubaci(hip, el);
        ispis(hip); }

    // izbacivanje svih korena
    while ( hip.size() != 0 ) {
        izbaci(hip);
        ispis(hip);

    }
    

    
    return 0; }