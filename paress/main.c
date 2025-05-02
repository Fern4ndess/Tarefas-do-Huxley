#include <stdio.h>

int main() {
    int a, quo, resto, armazene;
    // 123

scanf("%d", &a);
    resto = a % 10;
    armazene = resto % 2;
    if ( armazene % 2  == 0)
    {
        printf("%d", resto);
    } 
    a = resto;
}