#include <stdio.h>

int main() {
  //declara��o de variaveis
  int x, y, soma;

  //==============Entrada de dados==============
  //printf � sa�da de dados
  printf("Digite o primeiro valor: ");
  /*
  leitura de valor inteiro (& mostra o endere�o de mem�ria   da vari�vel)
  */
  scanf("%d", &x);
  printf("Digite o segundo valor: ");
  scanf("%d", &y);
  //==============Processamento==============
  soma = x+y;
  //==============Sa�da==============
  printf("soma = %d", soma);
  
  return 0;
}
  
