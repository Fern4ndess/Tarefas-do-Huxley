#include <stdio.h>
#include <math.h>

struct JOGO {
    int n;          // NÚMERO DE CASAS
    int jogadores;  // QUANTIDADE DE JOGADORES
    int rodadas;    // QUANTIDADE DE RODADAS
};

// jogador 1 --> i = 0
// se ciclo = 2 jogadores * 3 rodadas , então i + FROG.jogadores
int GAMEPLAY( struct JOGO FROG , int casas[FROG.n] , int players[FROG.jogadores] , int ciclo , int i , int resultado) {
    
    for( int a = 0 ; a < ciclo ; a += FROG.jogadores ) {
        
        resultado += players[a];
        if( resultado >= FROG.n ) { // automaticamente casa 0 ou adiciona o resto?
            resultado = resultado % FROG.n;
        }
        if( resultado < 0 ) { //caso resultado seja negativo
            resultado = FROG.n - resultado;
        }
        
        resultado += casas[resultado];
        if( resultado >= FROG.n ) { // automaticamente casa 0 ou adiciona o resto?
            resultado = resultado % FROG.n;
        }
        if( resultado < 0 ) { //caso resultado seja negativo
            resultado = FROG.n - resultado;
        }
        
    }
    
    return resultado;
}

int main() {
    struct JOGO FROG;
    
    scanf("%d %d %d", &FROG.n , &FROG.jogadores , &FROG.rodadas );
    int casas[ FROG.n ] , players[ FROG.jogadores ] ; // dados[ FROG.jogadores * FROG.rodadas ]
    int ciclo = FROG.jogadores * FROG.rodadas;
    
    for( int i = 0 ; i < FROG.n ; i++ ) {
        scanf("%d", &casas[i]);
    }
    
    for( int i = 0 ; i < FROG.rodadas ; i++ ) {
        
        for( int j = 0 ; j < FROG.jogadores ; j++ ) {
            scanf("%d", &players[j] ); // valores dos dados
        }
        
    }
    
    int players_position[ FROG.jogadores ];
    
    for( int i = 0 ; i < FROG.jogadores ; i++ ) {
        players_position[i] = GAMEPLAY( FROG , casas , players , ciclo , 0 , 0 );
        printf("%d\n", players_position[i]);
    }

    return 0;
}