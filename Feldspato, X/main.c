#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C, D, E;
    int SINAL;
    
    scanf ("%d %d %d %d %d", &A, &B, &C, &D, &E);
    
    SINAL = A * pow(10, 4) + B * pow(10, 3) + C * pow(10, 2) + D * 10 + E;
    
    if (A == E && B == D)
    {
        printf ("Feldspato, de um esporro no Gabro por mim");
    }
    else if ( SINAL % 2 == 0 && SINAL % 7 != 0 )
    {
        printf ("Feldspato, va para Gemeo Calido");
    }
    else if ( SINAL % 7 == 0 && SINAL % 2 != 0)
    {
        printf ("Feldspato, va para Gemeo Cinzento");
    }
    else if (99999 >= SINAL && SINAL >= 50000 )
    {
        printf ("Feldspato, va para Vale Incerto");
    }
    else if (100 <= SINAL && SINAL <= 49999 )
    {
        printf ("Feldspato, va para Profundezas do Gigante");
    }
    else if (0 < SINAL && SINAL < 3)
    {
        printf("Feldspato, va para Abrolho Sombrio");
    }
    else 
    {
        printf("Feldspato, foi um erro de leitura");
    }

    return 0;
}