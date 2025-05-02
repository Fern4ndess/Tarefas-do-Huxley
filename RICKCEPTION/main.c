#include <stdio.h>
#include <math.h>

// N = tempo de sono / T = camada de sonho 
//N + 3 , T - 1 / N + (N % 5), T - 1 
int rickception (int N , int i, int T) {

    if(i == T) {
        return N;
    }
    if(i % 2 == 0) {
        return rickception(N + 3, i + 1, T);

    }
    else  {
        return rickception(N + (N % 5), i + 1, T);  
    }
}

void processo () {
    int N, T;
    scanf("%d %d", &N, &T);
    
    printf("%d\n", rickception(N, 0, T));
}

int main()
{
    processo();
    return 0;
}