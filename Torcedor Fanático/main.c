#include <stdio.h>
#include <math.h>

int main() {
    int C, T, A, L, E;
    float CHANCE = 100.00;

    scanf("%d %d %d %d %d", &C, &T, &A, &L, &E);

    if (C == 1) { // casa
        if (T == 1) {
            CHANCE += 33.21; // Sol
        } else if (T == 2) {
            CHANCE += 10.51; // Neve
        } else {
            CHANCE -= 20.70; // Chuva
        }

        if (A > 40000) {
            CHANCE += A * 0.0008; // Mais de 40000 torcedores
        } 
        else {
            CHANCE -= A * 0.0008; // 40000 ou menos torcedores
        }

        if (E > 0) {
            CHANCE += E * 2.70; // Entrosamento positivo
        } 
        else {
            CHANCE -= E * 1.80; // Entrosamento negativo
        }
    } 
    else { 
        if ( T == 2 || T == 3) {
            CHANCE = 0.00;
        }
        else {
            if (T == 1) {
            CHANCE -= 10.87; // Sol
            }

            if (A > 45000) {
            CHANCE -= A * 0.0003; // Mais de 45000 torcedores
            } 
            else {
            CHANCE -= A * 0.0001; // 45000 ou menos torcedores
            }
        }

        if (E > 0) {
            CHANCE += E * 5.20; 
        } 
        else {
            CHANCE -= E * 1.50; 
        }
    }

    //2.7% para cada jogador lesionado
    CHANCE -= L * 2.70;

    if (CHANCE > 100.00) {
        CHANCE = 100.00;
    } 
    
    if (CHANCE < 0.00) {
        CHANCE = 0.00;
    }

    printf("A chance de vitoria do flamengo e de %.2f\n", CHANCE);

    return 0;
}