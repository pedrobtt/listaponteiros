#include <stdio.h>
#define TAM 10

int funcao1(int vetor[], int v){ 
  int i;
  for (i = 0; i < TAM; i++){
  if (vetor[i] == v)
  return i;
  }
  return -1;
}

/* funcao1 realiza uma buscar linear no vetor, procurando o valor valor v 
retornando o indice quando encontra, se não for encontrado retorna -1 */

int funcao2(int vetor[], int v, int i, int f){
  int m = (i + f) / 2;
  if (v == vetor[m])
  return m;
  if (i >= f)
  return -1;
  if (v > vetor[m])
  return funcao2(vetor, v, m+1, f);
  else
  return funcao2(vetor, v, i, m-1);
}

/* funcao2 realiza um busca binária recursiva, que divide o vetor ao meio em 
cada chamada */

int main(){
  int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM-1));
  return 0;
}

/*
I - Verdadeiro: A funcao1 percorre o vetor até encontrar o valor 15 (posição 7), 
logo retorna 7. A funcao2 realiza uma busca binaria no mesmo vetor, com v = 15 
e busca posições entre 0 a 9, o valor 15 também é encontrado na posição 7.

II - falso: A busca binária (funcao2) é mais rápida no pior caso.

III - falso: A funcao2 implementa uma estratégia recursiva, e não iterativa 
*/
