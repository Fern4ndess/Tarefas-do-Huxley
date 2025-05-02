#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print( int N , int i , int quantas_frutas[100] , double media_kg ) {
    if ( i == N ) {
        printf("%.2lfkg por dia\n", media_kg / (double)N );
        return;
    }
    
    printf("dia %d: %d kg\n", i + 1 , quantas_frutas[i] );
    
    media_kg += quantas_frutas[i];
    
    print( N , i + 1 , quantas_frutas , media_kg);
}

int conta_frutas(const char *str) {
    int contador = 0;
    int dentro_palavra = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            dentro_palavra = 0;
        } else if (dentro_palavra == 0) {
            dentro_palavra = 1;
            contador++;
        }
    }
    return contador;
}

void scan( int N , int i , double preco[100] , int quantas_frutas[100] , double media_preco ) {
    if ( i == N ) {
        print( N , 0 , quantas_frutas , 0 );
        printf("R$ %.2lf por dia\n", media_preco / N);
        return;
    }
    
    char frutas[100];
    
    scanf("%lf", &preco[i]);
    
    media_preco += preco[i];
    
    getchar();
    scanf("%[^\n]", frutas);
    
    quantas_frutas[i] = conta_frutas(frutas);
    
    scan( N , i + 1 , preco , quantas_frutas , media_preco );
}

int main() {
    int N;
    scanf("%d", &N);
    
    if( N < 0 || N > 20 ) return 0;
    
    double preco[100];
    int quantas_frutas[100];
    scan( N , 0 , preco , quantas_frutas , 0);
    
    return 0;
}