#include <stdio.h>
#include <string.h>
// Stringovi u C-u
// su nizovi znakova


int main() {
    //char s1 = {'S', 't', 'r', 'i', 'n', 'g'}; s1 je NIZ!
    
    char s1[6] = {'S', 't', 'r', 'i', 'n', 'a'}; // 6 znakova, NE VALJA
    char s2[] = {'S', 't', 'r', 'i', 'n', 'g'}; // C broji znakove, NE VALJA
    char s3[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'}; // C broji znakove
    char s4[] = {'S', 't', 'r', 'i', 'n', 'g', 0}; // C broji znakove

    printf("%s\n", s2);

    char s[] = "String"; // C sam doda 0 na kraju
    
    printf("%s\n", s);
    printf("%d\n", strlen(s));

    
    return 0;

    
    
    }