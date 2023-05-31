#include<stdio.h>

// Sem cópia de vetor
int main(){
	int arr[10], i, sum=0;
	
	for(i=0; i<10; i++)
		scanf("%d", &arr[i]);
		
	for(i=0; i<10; i++){
		if(arr[i]%2==0){
			printf("%d\n", arr[i]);
			sum+=arr[i];
		}	
	}
	
	printf("%d", sum);
	
	return 0;
}

/*
// Com cópia de vetor
int main(){
	int arr[10], i, j, sum=0, size=0;
	
	for(i=0; i<10; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%2==0){
			size++;
		}
	}
	
	int par[10];
	j=0;
	
	for(i=0; i<10; i++){
		if(arr[i]%2==0){
			par[j]=arr[i];
			printf("%d", par[j]);
			j++;
			sum+=arr[i];
		}
	}
	
	printf("%d", sum);
	
}
*/
