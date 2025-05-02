#include <stdio.h>
#include <math.h>

int muralha(int x, int y, int n, int anterior, int conta) {   
    if(n == 0) {
        return conta;
    }

    char direcao;
    scanf("%c", &direcao);

    int atual;
    if (direcao == 'D') {
        atual = 1;
    } 
    else {
        atual = 0;
    }

    if (y - x == 0 && atual == anterior) {
        conta++;
    }

    if (direcao == 'D') {
        return muralha( x+1 , y , n-1 , atual , conta );
    }

    else if (direcao == 'C') {
        return muralha( x , y+1 , n-1 , atual , conta );
    }

}

int main() {
    int n, y, x;

    scanf("%d", &n);

    printf("%d", muralha(0, 0, n, -1, 0));

    return 0;
}