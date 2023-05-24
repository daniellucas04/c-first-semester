#include<stdio.h>

int main(){
	char op;
	float n1, n2, res;
	
	scanf("%f %f %c", &n1, &n2, &op);
	
	switch(op){
		case '+':
			res = n1+n2;
			printf("%.1f", res);
			break;
		case '-':
			res = n1-n2;
			printf("%.1f", res);
			break;
		case '*':
			res = n1*n2;
			printf("%.1f", res);
			break;
		case '/':
			res = n1/n2;
			printf("%.1f", res);
			break;
	}
	
	return 0;
}
