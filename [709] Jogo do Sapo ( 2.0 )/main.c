#include <stdio.h>
#include <math.h>

struct JOGO {
    int n;
    int jogadores;
    int rodadas;
};

// nova posição do jogador após uma jogada
int GAMEPLAY( struct JOGO FROG , int casas[] , int dado , int posicao_atual ) {
    // movimento inicial com o valor do dado
    posicao_atual = (posicao_atual + dado) % FROG.n;

    // ajuste para índices negativos, se necessário
    if (posicao_atual < 0) {
        posicao_atual += FROG.n;
    }

    // efeito da casa onde o jogador caiu
    posicao_atual = (posicao_atual + casas[posicao_atual]) % FROG.n;

    // ajuste para índices negativos, se necessário
    if (posicao_atual < 0) {
        posicao_atual += FROG.n;
    }

    return posicao_atual;
}

int main() {
    struct JOGO FROG;

    scanf("%d %d %d", &FROG.n, &FROG.jogadores, &FROG.rodadas);
    int casas[FROG.n];
    int dados[FROG.jogadores * FROG.rodadas]; // lançamentos de dados

    // valores de cada casa 
    for (int i = 0; i < FROG.n; i++) {
        scanf("%d", &casas[i]);
    }

    // valores dos dados para cada rodada de cada jogador
    for (int i = 0; i < FROG.jogadores * FROG.rodadas; i++) {
        scanf("%d", &dados[i]);
    }

    int players_position[FROG.jogadores]; // posição final de cada jogador

    // todos os jogadores na posição 0
    for (int i = 0; i < FROG.jogadores; i++) {
        players_position[i] = 0;
    }

    for (int rodada = 0; rodada < FROG.rodadas; rodada++) {
        for (int jogador = 0; jogador < FROG.jogadores; jogador++) {
            
            int indice_dado = rodada * FROG.jogadores + jogador;
            int dado = dados[indice_dado];

            // atualiza a posição do jogador chamando GAMEPLAY
            players_position[jogador] = GAMEPLAY(FROG, casas, dado, players_position[jogador]);
        }
    }

    for (int i = 0; i < FROG.jogadores; i++) {
        printf("%d\n", players_position[i]);
    }

    return 0;
}
