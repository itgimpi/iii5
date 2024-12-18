#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Stringovi u C-u su nizovi znakova

int isdigit2( char c ) {
    //if ... else...
    return c >= '0' && c <= '9'; }

int isupper2( char c ) {
    //if ... else...
    return c >= 'A' && c <= 'Z'; }    

int islower2( char c ) {
    //if ... else...
    return c >= 'a' && c <= 'z'; } 

int isalpha2( char c ) {
    return  c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'; }

int tolower2( char c ) {
    // ako je veliko
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';

    // ako je malo
    else 
        return c; } 

void ispis(char *s) {
    int i = 0;
    while ( s[i] != 0 )
        printf("%c", s[i++]);
    printf("\n"); }

void ispis2(char *s) {
    char *p = s;
    while ( *p ) 
        printf("%c", *p++);
    printf("\n"); }

int main() {

    //          01234567890123
    char s[] = "Utorak11122024"; // C sam doda 0 na kraju
    
    printf("%s\n", s);
    printf("%d\n", strlen(s));
    ispis(s);ispis2(s);

    if ( isdigit(s[3]) ) printf("%c je cifra\n", s[3]);
    else printf("%c nije cifra\n", s[3]);

    if ( isdigit(s[9]) ) printf("%c je cifra\n", s[9]);
    else printf("%c nije cifra\n", s[9]);

    if ( isdigit2(s[9]) ) printf("%c je cifra\n", s[9]);
    else printf("%c nije cifra\n", s[9]);  

    return 0;

    
    
    }