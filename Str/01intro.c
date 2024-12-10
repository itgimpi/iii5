#include <stdio.h>
// Stringovi u C-u su nizovi znakova

int strlen2( char s[] ) {
    int i = 0;
    while ( s[i] != '\0' )
        i++;
    return i; }

int strlen3( char s[] ) {
    int i = 0;
    for ( ; s[i] != '\0'; i++ )
        ;
    return i; }

int strlen4( char *s ) { // s[] je *s
    int i = 0;
    for ( ; *s != 0; s++ )
        i++;
    return i; }

int strlen5( char *s ) { // s[] je *s
    char *p = s;
    for ( ; *p != 0; p++ )
        ;
    return p - s; }

int strlen6( char *s ) { // s[] je *s
    char *p = s;
    for ( ; *p; p++ )
        ;
    return p - s; }

int strlen7( char *s ) { // s[] je *s
    char *p = s;
    while ( *p ) p++;
    return p - s; }

int main() {


    char s[] = "String"; // C sam doda 0 na kraju
    
    printf("%s\n", s);
    printf("%d\n", strlen2(s)); printf("%d\n", strlen3(s));
    printf("%d\n", strlen4(s)); printf("%d\n", strlen5(s));
    printf("%d\n", strlen6(s)); printf("%d\n", strlen7(s));

    
    return 0;

    
    
    }