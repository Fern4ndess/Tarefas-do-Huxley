#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    double FM;
    
    scanf("%d%d%lf", &A, &B, &FM);
    
    if (A == 1 && B == 1)
    {
        printf("Aumenta mais!\n");
    }
    else if (A == 1 && B == 2)
    {
        printf("Legal\n");
    }
    else if (A == 2 && B == 1)
    {
        printf("Essa eh punk\n");
    }
    else if (A == 2 && B == 2)
    {
        printf("Hoje eu choro\n");
    }
    else if (A == 3 && B == 1)
    {
        printf("Aumenta mais!\n");
    }
    else if(A == 3 && B == 2)
    {
        printf("Legal\n");
    }
    
    if (FM >= 1 && FM <= 4)
    {
        printf(":'(\n");
    }
    else if (FM > 4 && FM <= 7)
    {
        printf("^_^\n");
    } 
    else if (FM > 7 && FM <= 10)
    {
        printf("=D\n");
    }
    
    return 0;
}