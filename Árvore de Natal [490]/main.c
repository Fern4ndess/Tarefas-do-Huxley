#include <stdio.h>
#include <math.h>

void scan( int i , double quantidade[] , double enfeites[] ) {
    
    if(i > 2) return;
    
    scanf("%lf", &quantidade[i]);
    scanf("%lf", &enfeites[i]);
    
    enfeites[i] = quantidade[i] * enfeites[i];
    
    scan( i + 1 , quantidade , enfeites );
}

int main() {
    double tree , quantidade[3] , enfeites[3] , total , parte;
    
    scanf("%lf", &tree);
    
    scan( 0 , quantidade , enfeites );
    
    total = enfeites[0] + enfeites[1] + enfeites[2] + tree;
    parte = total / 21;
    
    printf("%.2lf\n", total);
    printf("%.2lf\n", parte);
    
    return 0;
}