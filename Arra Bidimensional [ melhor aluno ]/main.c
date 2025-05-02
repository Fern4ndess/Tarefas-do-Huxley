#include <stdio.h>

int main() {
    float notas[3][3];
    
    float soma, media = 0.0;
    int melhorAluno = 0;
    float melhorMedia = 0.0;
    
    for (int i = 0; i < 3; i++) {
        
        soma = 0.0;
        
        for (int j = 0; j < 3; j++) {
            scanf("%f", &notas[i][j]);
            
            soma += notas[i][j];
        }
        
        media = soma / 3.0;
        
        if (media > melhorMedia) {
            melhorMedia = media;
            melhorAluno = i;
        }
    }
    
    printf("O melhor aluno foi: %d --- Média: %.2f", melhorAluno, melhorMedia);
    /*  0 = primeiro aluno
        1 = segundo aluno
        2 = terceiro aluno
    */
    
    return 0;
}