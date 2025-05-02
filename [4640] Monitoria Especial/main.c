#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Aluno {
        char nome[100];
        int idade;
        double nota;
    };

int main() {
    int N, menor_idade = 500 , i_menor__idade[100];
    double menor_nota , i_notas[100];
    double media_notas = 0 , media_idades = 0;
    
    struct Aluno alunos[100]; // array de structs
    
    scanf("%d", &N);
    
    int index = 0;
    
    for( int i = 0 ; i < N ; i++ ) {
        scanf("%[^\n]", alunos[i].nome); // %[] = sequ�ncia de caracteres; ^ = n�o ; l� at� encontrar um \n
        getchar();
        scanf("%d", &alunos[i].idade);
        scanf("%lf", &alunos[i].nota);
        getchar();
        
        media_idades += alunos[i].idade;
        media_notas += alunos[i].nota;
    }
    
    qsort(alunos, N, sizeof(Aluno), comparar_notas);
    printf("---Notas---\n");
    for (int i = 0; i < N; i++) {
        printf("%s %.2f\n", alunos[i].nome, alunos[i].nota);
    }
    
	return 0;
}