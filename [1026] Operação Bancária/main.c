#include <stdio.h>
#include <math.h>

struct BANCO {
    int operation;
    double valor;
};

int main() {
    struct BANCO OPS[100]; // array de structs
    int atual , contador = 0 ;
    double credito = 0 , debito = 0 , saldo = 0;
    
    for( int i = 0 ; i < 100 ; i++ ) {
        
        scanf("%d" , &atual);
        if( atual == -1 ) { // STOP!
            break;
        }
        OPS[i].operation = atual;
        scanf(" %lf", &OPS[i].valor);
        
        contador++;
    }
    
    for( int i = 0 ; i < contador ; i++ ) {
        
        if( OPS[i].operation == 1 ) {
            credito += OPS[i].valor;
            saldo += OPS[i].valor;
        }
        if( OPS[i].operation == 0 ) {
            debito += OPS[i].valor;
            saldo -= OPS[i].valor;
        }
        
    }
    
    printf("Creditos: R$ %.2lf\n", credito );
    printf("Debitos: R$ %.2lf\n", debito );
    printf("Saldo: R$ %.2lf\n", saldo );
    
    return 0;
}