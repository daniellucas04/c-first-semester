#include<stdio.h>

int main(){
<<<<<<< HEAD
	int i;
	char name[30];

	scanf("%s", &name);
	
	for(i=0; i<10; i++)
		printf("%s\n", name);
		
=======
	char nome[20];
	int i;
	gets(nome);
	
	for(i=0; i<10; i++){
		printf("%s \n", nome);
	}
>>>>>>> b777221a72ec0e5b539c89af8a5e8b6db2878eed
	return 0;
}
