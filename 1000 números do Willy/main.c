#include<stdio.h>



void ler_array(int i, int n, int array[])
{
    if (i < n)
    {
        scanf("%d", &array[i]);

        ler_array(i + 1, n, array);
    }
}

void loop()
{
    int n;

    int numeros[1000];

    scanf("%d", &numeros[0]);

    if (numeros[0] != -1)
    {
        ler_array(1, 1000, numeros); // ler a partir do índice 1, pois o índice 0 já foi lido.
        
        scanf("%d", &n);
        
        printf("%d\n", numeros[11]);
        printf("%d\n", numeros[999]);
        
        loop();
    }

    
}

int main()
{
    loop();

    return 0;
}