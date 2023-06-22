#include <stdio.h>

int menorNumero(int interval){
    int i;
    while(1) {
        for (i=1; i<=20;i++){
            if (interval % i != 0) break;
        }

        if (i == 21){
            return interval;
        }
        interval++;
    }
}

int main(void) {
    int intervalo=20;
    printf("%d\n", menorNumero(intervalo));
}