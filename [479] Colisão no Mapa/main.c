#include <stdio.h>
#include <math.h>

int main() {
    int linhas, colunas;
    
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    
    int mapa[linhas][colunas];
    
    for( int i = 0 ; i < linhas ; i++ ) {
        
        for( int j = 0 ; j < colunas ; j++ ) {
            scanf("%d", &mapa[i][j]);
        }
        
    }
    
    int C;
    scanf("%d", &C);
    getchar();
    
    char comandos[C];
    for( int i = 0 ; i < C ; i++ ) {
        scanf("%c", &comandos[i]);
        getchar();
    }
    
    int X, Y;
    scanf("%d", &X);
    scanf("%d", &Y);
    
    for( int i = 0 ; i < C ; i++ ) {
        if(comandos[i] == 'D' && mapa[ X ][ Y + 1 ] == 1 && Y + 1 < colunas ) {
            Y += 1;
        }
        if(comandos[i] == 'E' && mapa[ X ][ Y - 1 ] == 1 && Y - 1 >= 0 ) {
            Y -= 1;
        }
        if(comandos[i] == 'C' && mapa[ X - 1 ][ Y ] == 1 && X - 1 >= 0 ) {
            X -= 1;
        }
        if(comandos[i] == 'B' && mapa[ X + 1 ][ Y ] == 1 && X + 1 < linhas ) {
            X += 1;
        }
    }
    
    printf("(%d,%d)", X , Y);

    return 0;
}
