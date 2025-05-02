#include <stdio.h>
#include <string.h>

/* //strcpy() ------ > Copia e cola informações
int main() {
    char origem[] = "Olá";
    char destino[20];
    strcpy(destino, origem);            // Copia "Olá" para destino
    printf("Cópia: %s\n", destino);
    return 0;
}
*/

/* strcat ()  ---> Juntar duas strings
int main() {
    char str1[20] = "Olá, ";
    char str2[] = "mundo!";
    strcat(str1, str2);
    printf("Concatenação: %s\n", str1);
    return 0;
}
*/

/*
int main() {
    char str1[] = "Olá";
    char str2[] = "Olá";
    int resultado = strcmp(str1, str2);
    printf("Comparação: %d\n", resultado); // 0 se iguais ,1 se diferentes
    return 0;
}
*/

/*
int main() {
    char str[] = "Olá, mundo!";
    printf("Comprimento: %zu\n", strlen(str));
    return 0;
}
*/

/*
int main() {
    char str[] = "Olá, mundo!";
    size_t comprimento = strcspn(str, ",");
    printf("Comprimento até ',': %zu\n", comprimento);
    return 0;
}
*/

/*
int main() {
    char str[] = "Olá, mundo!";
    char *resultado = strchr(str, 'm');
    if (resultado) {
        printf("Encontrado: %s\n", resultado);
    } else {
        printf("Caractere não encontrado.\n");
    }
    return 0;
}
*/

/*
int main() {
    char str[] = "Olá, mundo!";
    char *resultado = strrchr(str, 'o');
    if (resultado) {
        printf("Última ocorrência: %s\n", resultado);
    } else {
        printf("Caractere não encontrado.\n");
    }
    return 0;
}

*/

/*
int main() {
    char str1[] = "Olá, mundo!";
    char str2[] = "mundo";
    char *resultado = strstr(str1, str2);
    if (resultado) {
        printf("Substring encontrada: %s\n", resultado);
    } else {
        printf("Substring não encontrada.\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Olá, mundo!";
    char str2[] = "Olá, amigo!";
    int resultado = strncmp(str1, str2, 5);
    printf("Comparação dos primeiros 5 caracteres: %d\n", resultado); // 0 se iguais
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char origem[] = "Olá, mundo!";
    char destino[20];
    strncpy(destino, origem, 5);
    destino[5] = '\0'; // Garantir que a string esteja terminada
    printf("Cópia limitada: %s\n", destino);
    return 0;
}
*/