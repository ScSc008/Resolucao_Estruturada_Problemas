#include <stdio.h>
#include <conio.h>

//4.	Escreva uma fun��o que receba a Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea.

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
