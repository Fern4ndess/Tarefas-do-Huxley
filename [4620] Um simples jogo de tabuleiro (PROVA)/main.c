#include <stdio.h>
#include <math.h>

void jogo( int casa_sete , int i_T , int i_D , int i_V , int i_H , int N , int tabuleiro[N] , int i , int rodadas , int T[rodadas] , int T_pontos , int D[rodadas] , int D_pontos , int V[rodadas] , int V_pontos , int H[rodadas] , int H_pontos , int j ) {
    
    if( j == rodadas ) {
        
        if( T_pontos > D_pontos && T_pontos > V_pontos && T_pontos > H_pontos ) {
            printf("Tenório venceu!\n");
            return;
        }
        else if( D_pontos > V_pontos && D_pontos > H_pontos && D_pontos > T_pontos ) {
            printf("Davi venceu!\n");
            return;
        }
        else if( V_pontos > H_pontos && V_pontos > T_pontos && V_pontos > D_pontos ) {
            printf("Vitor venceu!\n");
            return;
        }
        else if( H_pontos > T_pontos && H_pontos > D_pontos && H_pontos > V_pontos ) {
            printf("Humberto venceu!\n");
            return;
        }
        
        else if( T_pontos == D_pontos || T_pontos == V_pontos || T_pontos == H_pontos || D_pontos == V_pontos || D_pontos == H_pontos || V_pontos == H_pontos ) {
            printf("Houve um empate!\n");
            return;
        }
        
    }
    
    i_T += T[j];
    casa_sete = T[j];
    if( i_T >= N ) {
        i_T -= N;
    }
    
    if( tabuleiro[i_T] == 1 ) { // +10 pontos
        T_pontos += 10;
    }
    else if( tabuleiro[i_T] == 2 ) { // +15 pontos
        T_pontos += 15;
    }
    else if( tabuleiro[i_T] == 5 ) { // -5 pontos
        if( T_pontos < 5 ) {
            T_pontos = 0;
        }
        else if( T_pontos >= 5 ) {
            T_pontos -= 5;
        }
    }
    else if( tabuleiro[i_T] == 7 ) { // soma o valor do dado
        T_pontos += casa_sete;
    }
    else if( tabuleiro[i_T] == 9 ) { // - 20 pontos
        if( T_pontos < 20 ) {
            T_pontos = 0;
        }
        else if( T_pontos >= 20 ) {
            T_pontos -= 20;
        }
    }
    
    
    i_D += D[j];
    casa_sete = D[j];
    if( i_D >= N ) {
        i_D -= N;
    }
    
    if( tabuleiro[i_D] == 1 ) { // +10 pontos
        D_pontos += 10;
    }
    else if( tabuleiro[i_D] == 2 ) { // +15 pontos
        D_pontos += 15;
    }
    else if( tabuleiro[i_D] == 5 ) { // -5 pontos
        if( D_pontos < 5 ) {
            D_pontos = 0;
        }
        else if( D_pontos >= 5 ) {
            D_pontos -= 5;
        }
    }
    else if( tabuleiro[i_D] == 7 ) { // soma o valor do dado
        D_pontos += casa_sete;
    }
    else if( tabuleiro[i_D] == 9 ) { // - 20 pontos
        if( D_pontos < 20 ) {
            D_pontos = 0;
        }
        else if( D_pontos >= 20 ) {
            D_pontos -= 20;
        }
    }
    
    
    i_V += V[j];
    casa_sete = V[j];
    if( i_V >= N ) {
        i_V -= N;
    }
    
    if( tabuleiro[i_V] == 1 ) { // +10 pontos
        V_pontos += 10;
    }
    else if( tabuleiro[i_V] == 2 ) { // +15 pontos
        V_pontos += 15;
    }
    else if( tabuleiro[i_V] == 5 ) { // -5 pontos
        if( V_pontos < 5 ) {
            V_pontos = 0;
        }
        else if( V_pontos >= 5 ) {
            V_pontos -= 5;
        }
    }
    else if( tabuleiro[i_V] == 7 ) { // soma o valor do dado
        V_pontos += casa_sete;
    }
    else if( tabuleiro[i_V] == 9 ) { // - 20 pontos
        if( V_pontos < 20 ) {
            V_pontos = 0;
        }
        else if( V_pontos >= 20 ) {
            V_pontos -= 20;
        }
    }
    
    
    i_H += H[j];
    casa_sete = H[j];
    if( i_H >= N ) {
        i_H -= N;
    }
    
    if( tabuleiro[i_H] == 1 ) { // +10 pontos
        H_pontos += 10;
    }
    else if( tabuleiro[i_H] == 2 ) { // +15 pontos
        H_pontos += 15;
    }
    else if( tabuleiro[i_H] == 5 ) { // -5 pontos
        if( H_pontos < 5 ) {
            H_pontos = 0;
        }
        else if( H_pontos >= 5 ) {
            H_pontos -= 5;
        }
    }
    else if( tabuleiro[i_H] == 7 ) { // soma o valor do dado
        H_pontos += casa_sete;
    }
    else if( tabuleiro[i_T] == 9 ) { // - 20 pontos
        if( H_pontos < 20 ) {
            H_pontos = 0;
        }
        else if( H_pontos >= 20 ) {
            H_pontos -= 20;
        }
    }
    
    jogo( casa_sete , i_T , i_D , i_V , i_H , N , tabuleiro , i , rodadas , T , T_pontos , D , D_pontos , V , V_pontos , H , H_pontos , j + 1 );
}

void total_rodadas( int rodadas , int T[rodadas] , int D[rodadas] , int V[rodadas] , int H[rodadas] , int i ) {
    if( i == rodadas ) return;
    
    scanf( "%d " , &T[i] );
    scanf( "%d " , &D[i] );
    scanf( "%d " , &V[i] );
    scanf( "%d" , &H[i]  );
    
    total_rodadas( rodadas , T , D , V , H , i + 1 );
}

void scan( int N , int tabuleiro[N] , int i ) {
    if( i == N - 1 ) {
        scanf("%d", &tabuleiro[i] );
        return;
    }
    
    scanf("%d ", &tabuleiro[i] );
    
    scan( N , tabuleiro , i + 1 );
}

int main() {
    int N , tabuleiro[N];
    
    scanf("%d", &N );
    scan( N , tabuleiro , 0 );
    
    int rodadas , T[rodadas] , D[rodadas] , V[rodadas] , H[rodadas] ;
    scanf( "%d", &rodadas );
    total_rodadas( rodadas , T , D , V , H , 0 );
    
    jogo( 0 , 0 , 0 , 0 , 0 , N , tabuleiro , 0 , rodadas , T , 0 , D , 0 , V , 0 , H , 0 , 0 );

    return 0;
}