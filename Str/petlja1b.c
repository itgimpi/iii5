#include <stdio.h>
#include <string.h>
// Презиме па име

int main () {

    int ime[100], prezime[100]; // ime i prezime su pokazivaci!
    
    while( scanf("%s %s", ime, prezime) == 2 )  // dok ima..., uzmi ceo red, sa razmakom
        printf("%s %s\n", prezime, ime);


    
    return 0; }