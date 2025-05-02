#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int contar_tocas(int buracos[], int visitado[], int atual)
{
    if (visitado[atual])
    {
        return 0;  
    }
    visitado[atual] = 1;  
    return contar_tocas(buracos, visitado, buracos[atual]);  
}

void marcar_nao_visitados(int visitado[], int N, int i)
{
    if (i >= N)
    {
        return; 
    }
    visitado[i] = 0;  
    marcar_nao_visitados(visitado, N, i + 1);  
}

int organizar_tocas(int buracos[], int visitado[], int N, int i)
{
    if (i >= N)
    {
        return 0;  
    }
    if (!visitado[i])
    {
        contar_tocas(buracos, visitado, i);  
        return 1 + organizar_tocas(buracos, visitado, N, i + 1);  
    }
    return organizar_tocas(buracos, visitado, N, i + 1);  
}

void ler_tocas(int buracos[], int N, int i)
{
    if (i >= N)
    {
        return;  
    }
    scanf("%d", &buracos[i]);  
    ler_tocas(buracos, N, i + 1);  
}

int main()
{
    int N;
    scanf("%d", &N);
    
    int buracos[N];
    int visitado[N];
    
    
    ler_tocas(buracos, N, 0);
    
    
    marcar_nao_visitados(visitado, N, 0);
    
    
    int resultado = organizar_tocas(buracos, visitado, N, 0);
    
    printf("%d\n", resultado);
    
    return 0;
}