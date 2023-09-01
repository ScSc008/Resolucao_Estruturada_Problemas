#include <stdio.h>
#include <conio.h>

//1.	Escreva uma função, que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores.

int soma(int a,int b){
	int s;
	
	s = a + b;
	return s;
}

void main(){
	int s, n1, n2;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	
	s = soma(n1, n2);
	printf("soma: %d", s);
}
