#include <stdio.h>
#include <string.h>

void inversor( char string[] , int n ) {
    if( n < 0 ) return;
    
    printf("%c", string[n]);
    
    inversor( string , n - 1 );
}

void contagem( char string[] , int n ) {
    if( string[n] == '\0') {
        inversor( string , n );
        return;
    }
    contagem( string , n + 1 );
}

int main() {
    char string[255];
    
    scanf("%255[^\n]", string);
    
    contagem( string , 0 );

    return 0;
}