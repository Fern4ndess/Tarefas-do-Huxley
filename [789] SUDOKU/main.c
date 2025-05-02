#include <stdio.h>
#include <math.h>

void

int main() {
    int n;
    int sudoku[9][9] , anterior[500][500];
    int num_certos = 0 , linhas_validas = 0;
    
    scanf("%d", &n);
    
    for( int i = 0 ; i < n ; i++ ) {
        
        for( int a = 0 ; a < 9 ; a++ ) {
            for( int b = 0 ; b < 9 ; b++ ) {
                scanf("%d", &sudoku[a][b]);
                anterior[i][b] = sudoku[a][b];
                if( (   sudoku[a][b] == 1 || sudoku[a][b] == 2 || sudoku[a][b] == 3 ||
                        sudoku[a][b] == 4 || sudoku[a][b] == 5 || sudoku[a][b] == 6 ||
                        sudoku[a][b] == 7 || sudoku[a][b] == 8 || sudoku[a][b] == 9   ) && 
                        sudoku[a][b] != anterior[i][b]                                      ) {
                        num_certos += 1;
                }
                if( num_certos == 9 ) {
                    linhas_validas += 1;
                    num_certos = 0;
                }
            }
            
        }
        
        if( linhas_validas == 9 ) {
            printf("Instancia %d\n", i + 1 );
            printf("SIM\n");
        }
        else if( linhas_validas != 9 ) {
            printf("Instancia %d\n", i + 1 );
            printf("NAO\n");
        }
        
        num_certos = 0;
        linhas_validas = 0;
        for( int a = 0 ; a < 9 ; a++ ) {
            for( int b = 0 ; b < 9 ; b++ ) {
                sudoku[a][b] = 0;
            }
        }
        
        if( i == n - 1 ) {
            return 0;
        }
        else{
            printf(" \n");
        }
        
    }

    return 0;
}
