#include <stdio.h>
#include <stdlib.h>

int jogar(ESTADO *estado, COORDENADA c); //implementar
int jogar(ESTADO *estado, COORDENADA c){
  int line,column,nplay,auxcoord,jogadoratual,r;
  JOGADA auxjog[32], jogadaatual;
  line = c.linha; line--; //Coordenada da linha que foi jogada, de 0 a 7
  column = c.coluna; column--; //Coordenada da coluna que foi jogada, de 0 a 7 -- Corresponde a de 'a' a 'h' no quadro
  nplay = estado.num_jogadas; //nplay são as jogadas já efetuadas
  auxjog[32] = estado.jogadas; //Desconforto a trabalhar com estado.jogadas, coloquei a lista num novo array, já habituado
  jogadaatual = auxjog[nplay]; //Extrair a jogada mais recentemente. Nesta jogada, pode haver 1 ou 2 coordenadas.
  jogadoratual = estado.jogador_atual //De modo a saber se há 1 ou 2 coordenadas
  if(abs(jogadaatual.jogadoratual.coluna-column)<1 && abs(jogadaatual.jogadoratual.linha-line)<1 && estado.tab[column][line]==VAZIO){ //Se a coluna e linha em jogo estiverem a 1 unidade de distância da coluna e linha atual, e o espaço em jogo estiver Vazio, a jogada é válida
    r=1;
    if(jogadoratual==2){
      estado.jogador_atual=1;
      estado.num_jogadas++;
      estado.jogadas[nplay+1].jogador1.coluna = column;
      estado.jogadas[nplay+1].jogador1.linha = line;
      estado.tab[jogadas[nplay].jogador2.coluna][jogadas[nplay].jogador2.linha]=PRETA;
      estado.tab[column][line]=BRANCA;
    }
    else{ 
      estado.jogador_atual++;
      estado.jogadas[nplay].jogador2.coluna = column;
      estado.jogadas[nplay].jogador2.linha = line;
      estado.tab[jogadas[nplay].jogador1.coluna][jogadas[nplay].jogador1.linha]=PRETA
      estado.tab[column][line]=BRANCA;
        }
  }
  else r=2;
  return r;
