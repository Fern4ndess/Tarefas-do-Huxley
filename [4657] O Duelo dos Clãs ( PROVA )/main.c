#include <stdio.h>
#include <string.h>

struct JOGO {
    char campo[8][23];
};

int main() {
    struct JOGO RPG;
    int PA = 0; 
    int PV = 0; // Poder Azul ; Poder Vermelho
    
    for( int i = 0 ; i < 8 ; i++ ) {
        
        for( int j = 0 ; j < 23 ; j++ ) {
            
            scanf("%c", &RPG.campo[i][j]);
            if( j == 22 ) {
                getchar();
            }
            
        }
        
    }
    
    for( int i = 0 ; i < 8 ; i++ ) {
        
        for( int j = 0 ; j < 23 ; j++ ) {
            
            if( RPG.campo[i][j] == 'a' && RPG.campo[i][ j - 1 ] != ' ') {
                
                if( ( i == 3 || i == 4 ) && ( j == 11 || j == 14 ) ) { // modificador
                    PA += 3;
                }
                
                if( RPG.campo[i][ j - 3 ] != 'a' && RPG.campo[i][ j + 3 ] != 'a' &&
                    RPG.campo[ i - 1 ][ j ] != 'a' && RPG.campo[ i + 1 ][ j ] != 'a' ) { // modificador
                        PA -= 1;
                }
                
                if( RPG.campo[i][ j - 1 ] == 'g' ) {
                    PA += 5;
                }
                if( RPG.campo[i][ j - 1 ] == 'm' ) {
                    PA += 8;
                }
                if( RPG.campo[i][ j - 1 ] == 'a' ) {
                    PA += 6;
                }
                if( RPG.campo[i][ j - 1 ] == 'c' ) {
                    PA += 10;
                }
                if( RPG.campo[i][ j - 1 ] == 'd' ) {
                    PA += 15;
                }
                
                if( RPG.campo[i][ j - 1 ] == 'k' ) { 
                    
                    if( RPG.campo[i][ j - 3 ] == 'a' ) {
                        PA += 2;
                    }
                    if( RPG.campo[i][ j + 3 ] == 'a' ) {
                        PA += 2;
                    }
                    if( RPG.campo[ i - 1 ][ j ] == 'a' ) {
                        PA += 2;
                    }
                    if( RPG.campo[ i + 1 ][ j ] == 'a' ) {
                        PA += 2;
                    }
                    
                }
                
                
                
            }
            
            if( RPG.campo[i][j] == 'v' && RPG.campo[i][ j - 1 ] != ' ' ) {
                
                if( ( i == 3 || i == 4 ) && ( j == 11 || j == 14 ) ) { // modificador
                    PV += 3;
                }
                
                if( RPG.campo[i][ j - 3 ] != 'v' && RPG.campo[i][ j + 3 ] != 'v' &&
                    RPG.campo[ i - 1 ][ j ] != 'v' && RPG.campo[ i + 1 ][ j ] != 'v' ) { // modificador
                        PV -= 1;
                }
                
                if( RPG.campo[i][ j - 1 ] == 'g' ) {
                    PV += 5;
                }
                if( RPG.campo[i][ j - 1 ] == 'm' ) {
                    PV += 8;
                }
                if( RPG.campo[i][ j - 1 ] == 'a' ) {
                    PV += 6;
                }
                if( RPG.campo[i][ j - 1 ] == 'c' ) {
                    PV += 10;
                }
                if( RPG.campo[i][ j - 1 ] == 'd' ) {
                    PV += 15;
                }
                
                if( RPG.campo[i][ j - 1 ] == 'k' ) { 
                    
                    if( RPG.campo[i][ j - 3 ] == 'v' ) {
                        PV += 2;
                    }
                    if( RPG.campo[i][ j + 3 ] == 'v' ) {
                        PV += 2;
                    }
                    if( RPG.campo[ i - 1 ][ j ] == 'v' ) {
                        PV += 2;
                    }
                    if( RPG.campo[ i + 1 ][ j ] == 'v' ) {
                        PV += 2;
                    }
                    
                }
                
                
                
            }
            
        }
        
    }
    
    if( PA > PV ) {
        printf("Equipe Azul\n");
    }
    if( PA == PV ) {
        printf("Empate\n");
    }
    if( PA < PV ) {
        printf("Equipe Vermelha\n");
    }

    return 0;
}
