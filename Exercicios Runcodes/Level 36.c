#include<stdio.h>

int main(){
	int arr[5], i, j, pares[5], impares[5];
	
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
		for(j=0; j<5; j++){
			if(arr[j]%2==0){
				pares[j]=arr[j];
				impares[j]=0;
			}else{
				pares[j]=0;
				impares[j]=arr[j];
			}	
		}
	}	
	
	for(i=0; i<5; i++){
		if(pares[i]!=0){
			printf("%d\n", pares[i]);
		}
	}
	
	for(i=0; i<5; i++){
		if(impares[i]!=0){
			printf("%d\n", impares[i]);
		}
	}
	return 0;
}
