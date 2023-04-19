#include<stdio.h>

/*
A importância de R$ 780.000,00 será dividida entre os três primeiros colocados de um concurso,
 em partes diretamente proporcional aos pontos conseguidos por eles (0 a 100 pontos disputados pelos 3). 
 Construa um programa que leia os números de pontos dos três primeiros colocados e imprima a importância que caberá a cada um deles.
*/

int main(){
	// declarar variaveis
	float points1, points2, points3, premio = 780000.00, premio1, premio2, premio3;
	
	// ler dados
	scanf("%f", &points1);
	scanf("%f", &points2);
	scanf("%f", &points3);
	
	// calcular premio para 1, 2 e 3 colocados
	premio1 = premio*(points1/100);
	premio2 = premio*(points2/100);
	premio3 = premio*(points3/100);
	
	// mostrar premios para respectivas posições
	printf("%.1f,%.1f,%.1f", premio1, premio2, premio3);
	return 0;
}
