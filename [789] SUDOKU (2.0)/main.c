#include <stdio.h>

int verification( int sudoku[9][9] , int i ) {
    int linha_valida = 0 , coluna_valida = 0;
    
    for( int a = 0 ; a < 9 ; a++ ) {
        
        for( int b = 0 ; b < 9 ; b++ ) {
            
            for( int j = 0 ; j < 9 ; j++ ) { // for para percorrer apenas as colunas
                
                if( sudoku[a][b] == sudoku[a][j] ) {
                    if( b != j ) {
                        return 0;
                    }
                    else{
                        linha_valida += 1;
                    }
                }
                if( sudoku[a][b] == sudoku[j][b] ) {
                    if( a != j ) {
                        return 0;
                    }
                    else{
                        coluna_valida += 1;
                    }
                }
                
            }
            
        }
        
    }
    
    return 1;
}

void SUDOKU( int n , int i ) {
    
    if( n == i ) {
        return;
    }
    
    int sudoku[9][9];
    int S_N;
    
    for( int a = 0 ; a < 9 ; a++ ) {
        for( int b = 0 ; b < 9 ; b++ ) {
            scanf("%d", &sudoku[a][b]);
        }
    }
    
    S_N = verification( sudoku , 0 );
    
    if( S_N == 0 ) {
        printf("Instancia %d\n", i + 1 );
        printf("NAO\n");
    }
    if( S_N == 1 ) {
        printf("Instancia %d\n", i + 1 );
        printf("SIM\n");
    }
    
    if( i <= n - 1 ) {
        printf("\n");
    }
    
    SUDOKU( n , i + 1 );
}

int main() {
    int n;
    scanf("%d", &n);
    
    SUDOKU( n , 0 );

    return 0;
}