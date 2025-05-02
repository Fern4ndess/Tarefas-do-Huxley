#include <stdio.h>

void calculo( int N , int i , int D[] , double P[] ) {
    
    if( i >= N ) {
        return;
    }
    
    if( D[i] == 0 ) { //dificuldade 0
    
        if( P[i] <= 45 ) {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
    
        else if( P[i] <= 100 && P[i] >= 45 ) {
            P[i] *= 0.875;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.875;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.875;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            else {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
            }
        }
        
        else{
            P[i] *= 0.75;
            P[i] *= 0.75;
            P[i] *= 0.75;
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
        
    }
    
    if( D[i] == 1 ) { //dificuldade 1
    
        if( P[i] <= 45 ) {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
    
        else if( P[i] <= 100 && P[i] >= 45 ) {
            P[i] *= 0.90;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.90;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.90;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            else {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
            }
        }
        
        else{
            P[i] *= 0.80;
            P[i] *= 0.80;
            P[i] *= 0.80;
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
        
    }
    
    if( D[i] == 2 ) { //dificuldade 2
    
        if( P[i] <= 45 ) {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
    
        else if( P[i] <= 100 && P[i] >= 45 ) {
            
            P[i] *= 0.91;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.91;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.91;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            
            else{
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
            }
            
        }
        
        else{
            P[i] *= 0.82;
            P[i] *= 0.82;
            P[i] *= 0.82;
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
        
    }
    
    if( D[i] == 3 ) { //dificuldade 3
        
        if( P[i] <= 45 ) {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
        
        else if( P[i] <= 100 && P[i] >= 45 ) {
            P[i] *= 0.925;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.925;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.925;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            else {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
            }
        }
        
        else{
            P[i] *= 0.85;
            P[i] *= 0.85;
            P[i] *= 0.85;
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
        
    }
    
    if( D[i] == 4 ) { //dificuldade 4
    
        if( P[i] <= 45 ) {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
    
        else if( P[i] <= 100 && P[i] >= 45 ) {
            P[i] *= 0.94;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.94;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.94;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            else { 
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
            }
        }
        
        else{
            P[i] *= 0.88;
            P[i] *= 0.88;
            P[i] *= 0.88;
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
    }
    
    if( D[i] == 5 ) { //dificuldade 5
    
        if( P[i] <= 45 ) {
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
    
        else if( P[i] <= 100 && P[i] >= 45 ) {
            P[i] *= 0.95;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.95;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            P[i] *= 0.95;
            if( P[i] <= 45 ) {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
                calculo( N , i + 1 , D , P );
            }
            else {
                printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
            }
        }
        
        else{
            P[i] *= 0.90;
            P[i] *= 0.90;
            P[i] *= 0.90;
            printf("Jogo[%d] = R$%.2lf\n", i , P[i]);
        }
        
    }
    
    calculo( N , i + 1 , D , P );
}

void scan( int N , int i , int D[] , double P[] ) {
    if( i >= N ) {
        calculo( N , 0 , D , P );
        return;
    }
    scanf("%d %lf", &D[i] , &P[i]);
    scan( N , i + 1 , D , P );
}

int main() {
    int N;
    
    scanf("%d", &N );
    
    int D[N] ;
    double P[N];
    
    scan( N , 0 , D , P );
    return 0;
}