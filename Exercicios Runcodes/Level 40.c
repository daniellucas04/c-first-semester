#include<stdio.h>

// Com cópia de vetor
int main(){
	long long int arr[10], i, j, mult=1, size=0;
	
	for(i=0; i<10; i++){
		scanf("%lld", &arr[i]);
		if(arr[i]%2!=0){
			size++;
		}
	}
	
	long long int par[10];
	j=0;
	
	for(i=0; i<10; i++){
		if(arr[i]%2!=0){
			par[j]=arr[i];
			printf("%lld\n", par[j]);
			j++;
			mult*=arr[i];
		}
	}
	
	printf("%lld", mult);
	
}

/*
// Sem cópia de vetor
int main(){
	long long int arr[10], i, mult=1;
	
	for(i=0; i<10; i++)
		scanf("%lld", &arr[i]);
		
	for(i=0; i<10; i++){
		if(arr[i]%2!=0){
			printf("%lld\n", arr[i]);
			mult*=arr[i];
		}	
	}
	
	printf("%lld", mult);
	
	return 0;
}
*/
