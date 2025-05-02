#include <stdio.h>
#include <string.h>

int main() {
    // Exemplo de strcpy() - Copia uma string para outra
    char origem1[] = "Hello";
    char destino1[6];  // tamanho suficiente para armazenar "Hello" + '\0'
    strcpy(destino1, origem1);
    printf("strcpy: %s\n", destino1);  // Saída: Hello

    // Exemplo de strcat() - Concatena/junta duas strings
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("strcat: %s\n", str1);  // Saída: Hello, World!

    // Exemplo de strcmp() - Compara duas strings
    char s1[] = "apple";
    char s2[] = "banana";
    int cmp_result = strcmp(s1, s2);
    if (cmp_result < 0) {
        printf("strcmp: %s vem antes de %s\n", s1, s2);  // Saída: apple vem antes de banana
    } else if (cmp_result == 0) {
        printf("strcmp: As strings são iguais\n");
    } else {
        printf("strcmp: %s vem depois de %s\n", s1, s2);
    }

    // Exemplo de strlen() - Retorna o comprimento de uma string
    char str3[] = "Hello";
    printf("strlen: %lu\n", strlen(str3));  // Saída: 5 (comprimento de "Hello")

    // Exemplo de strcspn() - Comprimento da subsequência sem os caracteres de conjunto
    char str4[] = "hello world";
    printf("strcspn: %lu\n", strcspn(str4, "o"));  // Saída: 4 (índice da primeira ocorrência de 'o')

    // Exemplo de strchr() - Localiza a primeira ocorrência de um caractere
    char *p1 = strchr(str4, 'o');
    if (p1 != NULL) {
        printf("strchr: Primeiro 'o' encontrado em: %s\n", p1);  // Saída: "o world"
    }

    // Exemplo de strrchr() - Localiza a última ocorrência de um caractere
    char *p2 = strrchr(str4, 'o');
    if (p2 != NULL) {
        printf("strrchr: Último 'o' encontrado em: %s\n", p2);  // Saída: "orld"
    }

    // Exemplo de strstr() - Localiza a primeira ocorrência de uma substring
    char str5[] = "hello world";
    char *p3 = strstr(str5, "world");
    if (p3 != NULL) {
        printf("strstr: Substring 'world' encontrada em: %s\n", p3);  // Saída: "world"
    }

    // Exemplo de strncmp() - Compara no máximo os primeiros n caracteres
    char s3[] = "apple";
    char s4[] = "application";
    if (strncmp(s3, s4, 3) == 0) {
        printf("strncmp: Os primeiros 3 caracteres são iguais\n");  // Saída: verdadeiro
    } else {
        printf("strncmp: Os primeiros 3 caracteres são diferentes\n");
    }

    // Exemplo de strncpy() - Copia no máximo n caracteres de uma string para outra
    char origem2[] = "Hello";
    char destino2[10];
    strncpy(destino2, origem2, 3);  // Copia apenas os 3 primeiros caracteres
    destino2[3] = '\0';  // Garante que a string terminada em '\0' (importante)
    printf("strncpy: %s\n", destino2);  // Saída: "Hel"

    return 0;
}

