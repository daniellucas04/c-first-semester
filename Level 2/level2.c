#include <stdio.h>

int main() {
  //declaração de variaveis
  int x, y, soma;

  //==============Entrada de dados==============
  //printf é saída de dados
  printf("Digite o primeiro valor: ");
  /*
  leitura de valor inteiro (& mostra o endereço de memória   da variável)
  */
  scanf("%d", &x);
  printf("Digite o segundo valor: ");
  scanf("%d", &y);
  //==============Processamento==============
  soma = x+y;
  //==============Saída==============
  printf("soma = %d", soma);
  
  return 0;
}
  
