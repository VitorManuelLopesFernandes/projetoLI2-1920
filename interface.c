#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024

// Estruturas de dados (devem ser colocadas no módulo correto da camada dos dados)
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
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
  } ESTADO;

// Função que deve ser completada e colocada na camada da lógica do programa
int jogar(ESTADO *e, COORDENADA c) {
  printf("jogar %d %d\n", c.coluna, c.linha);
  return 1;
}

// Função que deve ser completada e colocada na camada de interface
  void mostrar_tabuleiro(ESTADO *e) {
    
}

// Função que deve ser completada e colocada na camada de dados
ESTADO *inicializar_estado() {
  ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
  e -> jogador_atual = 1;
  e -> num_jogadas = 0;
// Falta a resto da inicialização.
return e;
}

// Função que deve ser completada e colocada na camada de interface
int interpretador(ESTADO *e) {
  char linha[BUF_SIZE];
  char col[2], lin[2];

  if(fgets(linha, BUF_SIZE, stdin) == NULL)
    return 0;
  
  if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
    COORDENADA coord = {*col - 'a', *lin - '1'};
    jogar(e, coord);
    mostrar_tabuleiro(e);
  }
return 1;
}

// Função que deve ser colocada no ficheiro main.c
int main() {

  ESTADO *e = inicializar_estado();

  interpretador(e);

  return 0;
}

