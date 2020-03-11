#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "camadadedados.h"
#define BUF_SIZE 1024

//Funcao que inicializa o estado para uma partida.
ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e -> jogador_atual = 1;
    e -> num_jogadas = 0;
    e -> tab[4][4] = BRANCA;
    //Nao tenho certeza onde se poe a letra e o numero
    e -> ultima_jogada.coluna = 5;
    e -> ultima_jogada.linha = 5;
    
    return e;
}
