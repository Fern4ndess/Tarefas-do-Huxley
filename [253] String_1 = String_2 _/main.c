#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string_1[51] , string_2[51];
    
    fgets( string_1 , 51 , stdin ); // entrada
    string_1[strcspn(string_1, "\n")] = '\0'; // substitui \n por espaço nulo
    
    fgets( string_2 , 51 , stdin );
    string_2[strcspn(string_2, "\n")] = '\0';
    
    if (strcmp(string_1, string_2) == 0) { //strcmp = string comparison
        printf("IGUAIS\n");
    } 
    else {
        printf("DIFERENTES\n");
    }

    return 0;
}