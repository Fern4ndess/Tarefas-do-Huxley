#include <stdio.h>
#include <math.h>

int primo(int div, int n, int cont) {
    if (cont > n / 2 || div > 1) {
        if (div == 1) return 1;
        return 0;
    }
    else {
        if (n % cont == 0) {
            div += 1;
        }
        cont++;
    }
    return primo(div, n, cont);
}

int proximoprimo(int n) {
    if (primo(0, n, 1) == 1) return n;
    if (n == 1) return 1;
    else {
        return proximoprimo(n + 1);
    }
}

int fatorial(int x) {
    if (x == 1 || x == 0) return x;
    return x * fatorial(x - 1);
}

void principal(int cont, double n, double resposta) {
    double proximo = proximoprimo(cont);
    if (cont == n) {
        printf("%d!/%.0lf", cont, proximo);
        resposta += fatorial(cont) / proximo * 1.0;
        printf("\n%.2lf", resposta);
        return;
    }
    else if (n == 0) {
        printf("0.00");
        return;
    }
    printf("%d!/%.0lf + ", cont, proximo);
    resposta += fatorial(cont) / proximo * 1.0;
    return principal(cont +1, n, resposta);
}


int main() {
    double n;
    scanf("%lf", &n);
    principal(1, n, 0);
}