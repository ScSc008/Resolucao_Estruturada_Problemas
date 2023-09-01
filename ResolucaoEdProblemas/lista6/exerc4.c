#include <stdio.h>
#include <conio.h>

//4.	Escreva uma função que receba a Largura e o Comprimento do quadrado/retângulo, calcule e retorne a área.

float area(float l, float c){
	float a;
	
	a = l * c;
	return a;
}

void main(){
	float a, l, c;
	
	printf("informe a largura: ");
	scanf("%f", &l);
	printf("informe a cumprimento: ");
	scanf("%f", &c);
	
	a = area(l, c);
	printf("area: %0.2 f", a);
}
