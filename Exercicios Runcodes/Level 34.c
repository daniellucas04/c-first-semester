#include<stdio.h>

int main(){
	char arr[10], vogais[5]="aeiou";
	int i, j;
	
	for(i=0; i<10; i++)
		scanf("%s", &arr[i]);
		
	for(i=0; i<10; i++){
		j=0;
		while(j<5 && arr[i]!=vogais[j])
			j++;
			
		if(j==5)
			printf("%c\n", arr[i]);
	}
	
	return 0;
}
