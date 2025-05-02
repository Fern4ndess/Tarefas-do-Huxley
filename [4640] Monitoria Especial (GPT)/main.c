#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    double nota;
} Aluno;

int comparar_por_nota(const void *aluno1, const void *aluno2) {
    Aluno *a = (Aluno *)aluno1;
    Aluno *b = (Aluno *)aluno2;

    if (a->nota < b->nota) {
        return -1; // Coloca a antes de b
    }
    if (a->nota > b->nota) {
        return 1;  // Coloca b antes de a
    }
    return a->idade - b->idade; // Se notas são iguais, compara por idade
}

int comparar_por_idade(const void *aluno1, const void *aluno2) {
    Aluno *a = (Aluno *)aluno1;
    Aluno *b = (Aluno *)aluno2;

    if (a->idade < b->idade) {
        return -1; // Coloca a antes de b
    }
    if (a->idade > b->idade) {
        return 1;  // Coloca b antes de a
    }
    if (a->nota < b->nota) {
        return -1;
    }
    if (a->nota > b->nota) {
        return 1;
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    Aluno alunos[N];
    for (int i = 0; i < N; i++) {
        scanf("%s %d %lf", alunos[i].nome, &alunos[i].idade, &alunos[i].nota);
    }

    // Ordena alunos por nota
    qsort(alunos, N, sizeof(Aluno), comparar_por_nota);
    printf("---Notas---\n");
    for (int i = 0; i < N; i++) {
        printf("%s %.2f\n", alunos[i].nome, alunos[i].nota);
    }

    // Ordena alunos por idade
    qsort(alunos, N, sizeof(Aluno), comparar_por_idade);
    printf("---Idade---\n");
    for (int i = 0; i < N; i++) {
        printf("%s %d\n", alunos[i].nome, alunos[i].idade);
    }

    return 0;
}
