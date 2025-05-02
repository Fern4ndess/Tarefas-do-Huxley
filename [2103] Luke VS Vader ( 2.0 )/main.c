#include <stdio.h>

struct Vida {
    int Luke;
    int Vader;
};

struct Dano {
    int Luke[3][3];
    int Vader[3][3];
};

int main() {
    struct Vida HP;             
    struct Dano Attack;         

    // Leitura das vidas iniciais
    scanf("%d %d", &HP.Luke, &HP.Vader);
    printf(" \n");

    for (int i = 1; i <= 10; i++) {  // Máximo de 10 rodadas
        
        if (HP.Luke == 0 && HP.Vader == 0) {
            printf("Houve empate.\n");
            return 0;
        }
        if (HP.Luke > 0 && HP.Vader <= 0) {
            printf("Luke Skywalker Venceu.\n");
            return 0;
        }
        if (HP.Luke <= 0 && HP.Vader > 0) {
            printf("Darth Vader Venceu.\n");
            return 0;
        }

        // Leitura do ataque de Luke
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &Attack.Luke[j][k]);
            }
        }

        printf(" \n");

        // Leitura do ataque de Vader
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &Attack.Vader[j][k]);
            }
        }

        int luke_valido = (Attack.Luke[0][0] == 1 && Attack.Luke[1][1] == 1 && Attack.Luke[2][2] == 1 &&
                           Attack.Luke[0][1] == 0 && Attack.Luke[0][2] == 0 && Attack.Luke[1][0] == 0 &&
                           Attack.Luke[1][2] == 0 && Attack.Luke[2][0] == 0 && Attack.Luke[2][1] == 0) ||
                          (Attack.Luke[0][2] == 1 && Attack.Luke[1][1] == 1 && Attack.Luke[2][0] == 1 &&
                           Attack.Luke[0][0] == 0 && Attack.Luke[0][1] == 0 && Attack.Luke[1][0] == 0 &&
                           Attack.Luke[1][2] == 0 && Attack.Luke[2][1] == 0 && Attack.Luke[2][2] == 0);

        int vader_valido = (Attack.Vader[0][0] == 1 && Attack.Vader[1][1] == 1 && Attack.Vader[2][2] == 1 &&
                            Attack.Vader[0][1] == 0 && Attack.Vader[0][2] == 0 && Attack.Vader[1][0] == 0 &&
                            Attack.Vader[1][2] == 0 && Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0) ||
                           (Attack.Vader[0][2] == 1 && Attack.Vader[1][1] == 1 && Attack.Vader[2][0] == 1 &&
                            Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 && Attack.Vader[1][0] == 0 &&
                            Attack.Vader[1][2] == 0 && Attack.Vader[2][1] == 0 && Attack.Vader[2][2] == 0);

        if ( luke_valido && vader_valido ) { // Ambos têm ataque válido
            if ((Attack.Luke[0][0] == 1 && Attack.Vader[0][0] == 1) || 
                (Attack.Luke[0][2] == 1 && Attack.Vader[0][2] == 1)) {
                HP.Luke -= 15; // Vader ataca
                HP.Vader -= 15; // Luke ataca
            }
        } 
        else if (luke_valido) {
            HP.Vader -= 15;  // Luke ataca
        } 
        else if (vader_valido) {
            HP.Luke -= 15;  // Vader ataca
        }

        if (i == 10) {
            if (HP.Luke > HP.Vader) {
                printf("Luke Skywalker Venceu.\n");
            } else if (HP.Luke < HP.Vader) {
                printf("Darth Vader Venceu.\n");
            } else {
                printf("Houve empate.\n");
            }
            return 0;
        }
    }

    return 0;
}
