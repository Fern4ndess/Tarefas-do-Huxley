#include <stdio.h>

void inverso ( int N , int caminho[N] , int i ) {
    if( i == 0 ) {
        printf("%d\n", caminho[i] );
        return;
    }
    
    printf("%d ", caminho[i] );
    
    inverso( N , caminho , i - 1 );
}

void contagem ( int N , int caminho[N] , int amarelo , int laranja , int vermelho , int i ) {
    if( i == N ) {
        printf( "Amarelo = %d\n" , amarelo ); 
        printf( "Laranja = %d\n" , laranja );
        printf( "Vermelho = %d\n" , vermelho );
        return;
    }
    
    if( caminho[i] == 3 ) {
        amarelo += 1;
    }
    if( caminho[i] == 2 ) {
        laranja += 1;
    }
    if( caminho[i] == 1 ) {
        vermelho += 1;
    }
    
    contagem( N , caminho , amarelo , laranja , vermelho , i + 1 );
}

void scan( int N , int caminho[N] , int totaldepassos ) {
    if( totaldepassos == N ) {
        contagem( N , caminho , 0 , 0 , 0 , 0 );
        inverso( N , caminho , N - 1 );
        return;
    }
    
    scanf("%d", &caminho[totaldepassos] );
    
    scan( N , caminho , totaldepassos + 1 );
}
 
int main() {
    int N , caminho[N] ;
    
    scanf( "%d", &N );
    scan( N , caminho , 0 );

    return 0;
}

/*
Amarelo = 3
Laranja = 2
Vermelho = 1
*/