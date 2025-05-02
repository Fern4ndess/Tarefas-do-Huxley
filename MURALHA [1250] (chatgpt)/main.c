#include <stdio.h>

// Função recursiva para calcular as moedas necessárias
int contarMoedas(int N, int x, int y, int ladoAtual, int moedas) {
    // Caso base: Se não há mais movimentos, retorna o número de moedas
    if (N == 0) {
        return moedas;
    }

    char movimento;
    scanf(" %c", &movimento);  // Lê o próximo movimento

    // Atualiza as coordenadas com base no movimento
    if (movimento == 'D') {
        x++;  // Movimento para direita (x aumenta)
    } else if (movimento == 'C') {
        y++;  // Movimento para cima (y aumenta)
    }

    // Verifica em qual lado da reta y = x o viajante está
    int novoLado;
    if (y > x) {
        novoLado = 1;  // Acima da linha (y > x)
    } else if (y < x) {
        novoLado = -1;  // Abaixo da linha (y < x)
    } else {
        novoLado = 0;  // Na linha (y == x)
    }

    // Se o lado mudou (de positivo para negativo ou vice-versa), conta uma moeda
    if (novoLado != ladoAtual && novoLado != 0) {
        moedas++;
        ladoAtual = novoLado;  // Atualiza o lado atual
    }

    // Chama a função recursivamente para o próximo movimento
    return contarMoedas(N - 1, x, y, ladoAtual, moedas);
}

int main() {
    int N;
    scanf("%d", &N);  // Lê o número de dias (movimentos)

    // Chama a função recursiva começando da posição inicial (0, 0)
    int resultado = contarMoedas(N, 0, 0, 0, 0);

    // Imprime o número de moedas necessárias
    printf("%d\n", resultado);

    return 0;
}