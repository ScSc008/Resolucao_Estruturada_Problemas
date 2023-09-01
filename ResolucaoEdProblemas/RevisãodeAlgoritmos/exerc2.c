#include <stdio.h>
#include <conio.h>

//2.	Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e altura),
// calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas paredes 
// (considere que não será descontada a área ocupada por portas e janelas). 
//Cada caixa de azulejos possui 1,5 m2.

void main(){
	float c, l , a, i, area;
	
	printf("informe o comprimento");
	scanf("%f", &c);
	printf("informe a largura");
	scanf("%f", &l);
	printf("informe a altura");
	scanf("%f", &a);
	
	area = (c * a * 2) + (l * a * 2);
	i = area / 1.5;
	
	printf("quantidade de caixas necessarias: %0.2f", i);
}
