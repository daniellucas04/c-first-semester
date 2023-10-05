#include<stdio.h>
#include<ctype.h>	
#include<string.h>

int main(){
	int i=0, j, l, aux = 0, count=0, sum=0;
	char letters[99], lettersJoin[99];

	while(scanf("%s", letters) != EOF) {
		int tempTwoDigit = 0, tempTwoDigit2 = 0, k=0;
		for(i=0; letters[i]!='\0'; i++){
			// todos os números da string
			if((letters[i] < 'a' || letters[i] > 'z')){
				if((letters[i+1] < 'a' || letters[i+1] > 'z')){
					if(letters[i+1]-'0' != 0){
						aux = (letters[i]-'0') * 10;
						aux += letters[i+1]-'0';
						tempTwoDigit += aux;
					} else {
						tempTwoDigit2 += (letters[i]-'0') * 10;
					}
				}
				if(tempTwoDigit > 0){
					sum+=tempTwoDigit;
				} 
				if(tempTwoDigit2 > 0){
					sum+=tempTwoDigit2;
				}
				sum+=letters[i]-'0';
			}
			for(j=0; j<sum; j++){
				for(l=0; l<sum; l++){
					if(!(letters[k] < 'a' || letters[k] > 'z')){
						if(count==0){
							printf("%c", letters[k]);
						}else{
							printf(" %c", letters[k]);
						}
						count++;
					}
				}
				k++;
			}
			sum=0; 
		}
		count=0;
		printf("\n");
	}

	return 0;
}

