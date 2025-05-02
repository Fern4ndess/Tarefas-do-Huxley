#include <stdio.h>
#include <math.h>

int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    else if(n == 2) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}



int primo(int n) {
    
    if (n <= 1) {
        return 0;
    }
    if (n == 2 || n == 3 || n == 5 || n == 7) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        return 0;
    }
    else {
        return 1;
    }
    
}

void processo(int n , int Aim , int Ekul) {
    scanf("%d", &n);
    
    if (n == -1) {
        if(Aim == Ekul) {
            printf("A ração se perdeu durante o duelo\n");
            return;
        }
        if(Aim > Ekul) {
            printf("Aim conquistou o pote de ração!\n");
            return;
        }
        if(Aim < Ekul) {
            printf("Ekul conquistou o pote de ração!\n");
            return;
        }
    }
    
    if ( primo(n) == 1 ) {
        Aim += 1;
    }
    if( n == 0 || n == 1 || n == 2 || n == 3 || n == 5 || n == 8 || n == 13 ||
        n == 21 || n == 34 || n == 55 || n == 89 || n == 144) {
        Ekul += 1;
    }
    
    processo( n , Aim , Ekul );
}

int main() {
    int n;
    processo( n , 0 , 0);
    return 0;
}