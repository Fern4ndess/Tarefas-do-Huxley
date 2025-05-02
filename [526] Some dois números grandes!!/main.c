#include <stdio.h>
#include <string.h>

void soma_recursiva( char X[] , char Y[] , int i , int j , int vai_um, char resultado[] , int pos ) {
    
    if( i < 0 && j < 0 && vai_um == 0 ) {
        resultado[pos] = '\0';
        
        for( int k = 0 ; k < pos / 2; k++) {
            char temp = resultado[k];
            resultado[k] = resultado[ pos - k - 1 ];
            resultado[ pos - k - 1 ] = temp;
        }
        
        return;
    }
    
    int digito_1 = ( i >= 0 ) ? X[i] - '0' : 0;
    int digito_2 = ( j >= 0 ) ? Y[j] - '0' : 0;
    
    int soma = digito_1 + digito_2 + vai_um;
    resultado[pos] = ( soma % 10 ) + '0';
    vai_um = soma / 10;
    
    soma_recursiva( X , Y , i - 1 , j - 1 , vai_um , resultado , pos + 1 );
}

int main() {
    char M[10000], N[10000], resultado[10001];
    
    scanf("%s", M);
    scanf("%s", N);
    
    int lenM = strlen(M);
    int lenN = strlen(N);
    soma_recursiva( M , N , lenM - 1 , lenN - 1 , 0 , resultado , 0 );
    
    printf("%s\n", resultado);
    
}