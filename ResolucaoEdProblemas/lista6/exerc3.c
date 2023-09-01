#include <stdio.h>
#include <conio.h>

//3.	Escreva uma função que receba 2 parametros (Nota1 e Nota2) calcule e retorne a média.

float media(float n1, float n2){
	float m;
	
	m = (n1 + n2)/2;
	return m;
}

void main(){
	float m, n1, n2;
	
	printf("informe a primeira nota: ");
	scanf("%f", &n1);
	printf("informe a segunda nota: ");
	scanf("%f", &n2);
	
	m = media(n1, n2);
	printf("media final: %0.2f", m);
}
