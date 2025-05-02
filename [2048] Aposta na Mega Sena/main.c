#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct MEGA {
    int n;
    int apostas[100][10];
    int resultado[6]; // sequência de 6 números
};

int main() {
    struct MEGA SENA;
    
    scanf("%d", &SENA.n);
    int tamanho_apostas[SENA.n];
    int acertos[SENA.n];
    
    for( int a = 0 ; a < SENA.n ; a++ ) {
        tamanho_apostas[a] = 0;
        acertos[a] = 0;
    }
    
    for( int a = 0 ; a < SENA.n ; a++ ) {
        char ch;
        
        for (int b = 0; b < 10; b++) { 
            if (scanf("%d%c", &SENA.apostas[a][b], &ch) == 2) {
                tamanho_apostas[a] += 1; // Incrementa o tamanho da aposta do jogador `a`
                if (ch == '\n') break;  // Sai do loop ao encontrar um `\n`
            } 
            else {
                break;
            }
        }
        
    }
    
    for( int c = 0 ; c < 6 ; c++ ) {
        if( c == 5 ) {
            scanf("%d" , &SENA.resultado[c]);
            break;
        }
        scanf("%d " , &SENA.resultado[c]);
    }
    
    int ganhadores = 0;
    
    for( int a = 0 ; a < SENA.n ; a++ ) { // comparar se há 6 números corretos em cada aposta
        
        for( int b = 0 ; b < tamanho_apostas[a] ; b++ ) {
            
            for( int c = 0 ; c < 6 ; c++ ) {
                
                if( SENA.apostas[a][b] == SENA.resultado[c] ) {
                    acertos[a] += 1;
                    break;
                }
                
            }
            
        }
        
        if( acertos[a] == 6 ) {
            ganhadores += 1;
        }
        
    }
    
    printf("Total de ganhadores: %d\n", ganhadores);
    
    return 0;
}
