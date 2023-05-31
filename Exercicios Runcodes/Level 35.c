#include<stdio.h>

int main(){
	char text[30];
	int i, j, size, half;
	
	scanf("%s", text);
	
	size=0;
	
	while(text[size]!='\0')
		size++;
	
	half=size/2;
	j=size-1;
	
	for(i=0; i<half; i++){
		if(text[i]==text[j])
			j--;
		else
			break;
	}
	
	if(j<=i)
		printf("palindromo");
	else
		printf("nao palindromo");
		
	return 0;
}
