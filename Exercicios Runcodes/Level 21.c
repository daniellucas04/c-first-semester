#include<stdio.h>

int main(){
	char name[30];
	int i;
	
	scanf("%s", name);
	
	for(i=0; i<10; i++)
		printf("%s\n", name);
	return 0;
}
