#include <stdio.h>
#include <math.h>

int main() {
    int MYLVL, ENEMYLVL; // LVL = Level = nível
    double DANO, VIDA; // DANO é meu, VIDA é do ENEMY
    //(Vida do inimigo * multiplicador baseado no LVL dele)–(Seu dano * multiplicador baseado no seu LVL)

    scanf("%d %lf\n", &MYLVL, &DANO);
    scanf("%d %lf\n", &ENEMYLVL, &VIDA);
    
    // CASOS IMPOSSÍVEIS
    if (MYLVL < 1 || ENEMYLVL < 1) {
        printf("Nivel abaixo\n");
    }
    else if (MYLVL > 20 || ENEMYLVL > 20) {
        printf("Nivel acima\n");
    } // CASOS POSSÍVEIS
    else if (MYLVL >= 1 && MYLVL <= 5) {
        DANO *= 1.20;
        if (ENEMYLVL >= 1 && ENEMYLVL <= 5) {
            VIDA *= 1.20;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 6 && ENEMYLVL <= 10) {
            VIDA *= 1.50;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 11 && ENEMYLVL <= 15) {
            VIDA *= 1.80;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 16 && ENEMYLVL <= 20) {
            VIDA *= 2;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
    }
    else if (MYLVL >= 6 && MYLVL <= 10) {
        DANO *= 1.50;
        if (ENEMYLVL >= 1 && ENEMYLVL <= 5) {
            VIDA *= 1.20;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 6 && ENEMYLVL <= 10) {
            VIDA *= 1.50;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 11 && ENEMYLVL <= 15) {
            VIDA *= 1.80;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 16 && ENEMYLVL <= 20) {
            VIDA *= 2;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
    }
    else if (MYLVL >= 11 && MYLVL <= 15) {
        DANO *= 1.80;
        if (ENEMYLVL >= 1 && ENEMYLVL <= 5) {
            VIDA *= 1.20;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 6 && ENEMYLVL <= 10) {
            VIDA *= 1.50;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 11 && ENEMYLVL <= 15) {
            VIDA *= 1.80;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 16 && ENEMYLVL <= 20) {
            VIDA *= 2;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
    }
        else if (MYLVL >= 16 && MYLVL <= 20) {
        DANO *= 2;
        if (ENEMYLVL >= 1 && ENEMYLVL <= 5) {
            VIDA *= 1.20;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 6 && ENEMYLVL <= 10) {
            VIDA *= 1.50;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 11 && ENEMYLVL <= 15) {
            VIDA *= 1.80;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
        else if (ENEMYLVL >= 16 && ENEMYLVL <= 20) {
            VIDA *= 2;
            VIDA -= DANO;
            if (VIDA <= 0) {
                printf("Personagem 1 venceu\n");
                printf("Dano causado: %.2lf\n", DANO);
            }
            else {
                printf("Personagem 2 venceu\n");
                printf("Vida  restante: %.2lf\n", VIDA);
            }
        }
    }
    
    return 0;
}