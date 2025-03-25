#include <iostream>
#include <string>
using namespace std;
// strings in c++
// constructors
int main () {
    string s1;
    string s2 = "neki tekst";
    cout << s2 << endl; 
               //0123456789
    string s3 = "1234567890";
    cout << s3 << '\n';

    string s4("novi string"); cout << s4 << '\n';
    string s5(s4); cout << s5 << '\n';
    string s6(s3, 3); cout << s6 << '\n'; // 4567890 - od 3. el.
    string s7(s3, 3, 6); cout << s7 << '\n'; // 456789 - od 3. el. naredna 6

    string s8(10, 'b'); cout << s8 << endl;
    string s9(10, 64); cout << s9 << endl; //@@@@@@@@@@

    

    
    return 0; }