#include <stdio.h>

void ler(int dia, int programas, int linha, int produtivo, int diaProdutivo) {
    int linha_atual, programa_atual, melhorAtual;
    
    scanf("%d %d", &programa_atual, &linha_atual);
    
    if (dia > 7) {
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", programas);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", linha);
        
        if (produtivo == 1) {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        } 
        else if (produtivo == 2) {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if (produtivo == 3) {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if (produtivo == 4) {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if (produtivo == 5) {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if (produtivo == 6) {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
        return; 
    }

    if (programa_atual >= 5) {
        programas++;
    }

    if (linha_atual >= 100) {
        linha++;
    }

    melhorAtual = linha_atual * programa_atual;

    if (melhorAtual > produtivo) {
        produtivo = melhorAtual;
        diaProdutivo = dia;
    }

    return ler(dia + 1, programas, linha, produtivo, diaProdutivo);

}

int main() {

    ler(1, 0, 0, 0, 1);

    return 0;
}