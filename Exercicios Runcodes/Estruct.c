#include<stdio.h>

typedef struct{
	int dia;
	int mes;
	int ano;
} data;

int main(){
	data *p; //p e um ponteiro para registros de data
	data x;
	
	p=&x; //agora p aponta para x

	(*p).dia = 31; // mesma coisa que x.dia=31
	x.mes=6;
	(*p).ano=2023;
	printf("\n*p = %d", (*p).dia);
	printf("\n*p = %d", (*p).mes);
	printf("\n*p = %d\n", p->ano);

	p -> dia=22; // mesmo efeito que (*p).dia=22
	printf("\np = %d", p -> dia);
	printf("\nx = %d", x.dia);

	return 0;
}
