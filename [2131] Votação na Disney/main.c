#include <stdio.h>

int main() {
    int P, E; // P = princesas ; E = eleitores
    
    scanf("%d", &P);
    scanf("%d", &E);
    
    int election[E][P]; // E = linhas ; P = colunas
    
    for (int i = 0 ; i < E ; i++) {
        
        for (int j = 0 ; j < P ; j++) {
            if( j == P - 1 ) {
                scanf("%d", &election[i][j]);
            }
            else{
                scanf("%d ", &election[i][j]);
            }
        }
        
    }
    
    int princesas[P];
    
    for (int x = 0; x < P; x++) {
        princesas[x] = 0;
    }
    
    for (int i = 0 ; i < E ; i++) {
        
        for (int j = 0 ; j < P ; j++) {
            if( election[i][j] == 1 ) {
                princesas[j] += 1;
            }
        }
        
    }
    
    for( int X = 0 ; X < P ; X++ ) {
        printf("Princesa %d: %d voto(s)\n", X + 1 , princesas[X] );
    }

    return 0;
}