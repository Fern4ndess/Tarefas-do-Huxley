#include <stdio.h>

void ler(int dia, int diasProgramas, int diasLinhas, int melhorProducao, int diaMaisProdutivo) {
    int linha_atual, programa_atual, producaoAtual;
    
    if (dia > 7) {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", diasProgramas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", diasLinhas);
    
        if (diaMaisProdutivo == 1) {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        } else if (diaMaisProdutivo == 2) {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        } else if (diaMaisProdutivo == 3) {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        } else if (diaMaisProdutivo == 4) {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        } else if (diaMaisProdutivo == 5) {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        } else if (diaMaisProdutivo == 6) {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        } else {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }

        return;
    }

    scanf("%d %d", &programa_atual, &linha_atual);

    if (programa_atual >= 5) {
        diasProgramas++;
    }

    if (linha_atual >= 100) {
        diasLinhas++;
    }

    producaoAtual = linha_atual * programa_atual;

    if (producaoAtual > melhorProducao) {
        melhorProducao = producaoAtual;
        diaMaisProdutivo = dia;
    }
    ler(dia + 1, diasProgramas, diasLinhas, melhorProducao, diaMaisProdutivo);
}

int main() {
    ler(1, 0, 0, 0, 1);
    return 0;
}