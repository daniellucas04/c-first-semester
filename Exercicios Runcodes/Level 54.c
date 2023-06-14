#include<stdio.h>

long long int fatorial(long long int number){
	if(number==0){
		return 1;
	}else{
		return number*fatorial(number-1);
	}
}

int main(){
	long long int number;
	
	scanf("%lld", &number);
	printf("%lld", fatorial(number));
	
	return 0;
}
