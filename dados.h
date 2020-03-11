#ifndef PROJETOLI2_CAMADADEDADOS_H
#define PROJETOLI2_CAMADADEDADOS_H

typedef enum {VAZIO, BRANCA, PRETA} CASA;
typedef struct {
    int coluna;
    int linha;
} COORDENADA;

typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;

typedef JOGADA JOGADAS[32];

typedef struct {
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

ESTADO *inicializar_estado(); // cria um estado vazio (com o tabuleiro inicializado)

int obter_jogador_atual(ESTADO *estado); // dá o número do jogador atual

int obter_numero_de_jogadas(ESTADO *estado); // dá quantas jogadas foram efetuadas (1 jogada = movimento dos 2 jogadores)

CASA obter_estado_casa(ESTADO *e, COORDENADA c); // dá o estado atual da casa

#endif //PROJETOLI2_CAMADADEDADOS_H
