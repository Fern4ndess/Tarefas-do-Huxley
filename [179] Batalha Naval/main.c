#include <stdio.h>
#include <string.h>

int main() {
    int linhas, colunas;
    
    scanf("%d %d", &linhas , &colunas );
    getchar();
    
    char tabuleiro[ linhas ][ colunas ];
    
    for( int i = 0 ; i < linhas ; i++ ) {
        
        for( int j = 0 ; j < colunas ; j++ ) {
            
            scanf("%c", &tabuleiro[i][j] );
            
        }
        getchar();
        
    }
    
    int navios = 0;
    int xy_navios[ linhas * colunas ][2];
    
    for( int i = 0 ; i < linhas ; i++ ) {
        
        for( int j = 0 ; j < colunas ; j++ ) {
            
            if( tabuleiro[ i ][ j ] == '#' ) {
                
                if ( (i == 0 || tabuleiro[i - 1][j] != '#') && (j == 0 || tabuleiro[i][j - 1] != '#') ) { 
                    xy_navios[navios][0] = i;
                    xy_navios[navios][1] = j;
                    navios++;
                }
                
            }
            
        }
        
    }
    
    int x;
    scanf("%d", &x );
    int tiros[x][2];
    int navios_abatidos = 0;
    
    for (int i = 0; i < x; i++) {
        scanf("%d %d", &tiros[i][0], &tiros[i][1]);
        tiros[i][0]--; // Ajusta para índice correto
        tiros[i][1]--;
    }
    
    int abatido[ linhas * colunas ];
    memset( abatido , 0 , sizeof(abatido) ); // função padrão do C que preenche todo um array
    
    for( int i = 0 ; i < x ; i++ ) {
        
        for( int j = 0 ; j < navios ; j++ ) {
            
            if( tiros[i][0] == xy_navios[j][0] && tiros[i][1] == xy_navios[j][1] && !abatido[j] ) {
                navios_abatidos += 1;
                abatido[j] = 1;
                break;
            }
            
        }
        
    }
    
    printf("%d\n", navios_abatidos);

    return 0;
}