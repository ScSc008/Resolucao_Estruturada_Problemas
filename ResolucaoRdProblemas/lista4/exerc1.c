#include <stdio.h>
#include <conio.h>

//1 - Escreva uma função que leia 2 números, após a leitura somar e retornar o resultado. 
//Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.

int soma2(){
	int n1, n2, s;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	
	s = n1 + n2;
	
	return s;
}

void main(){
	int soma;
	
	soma = soma2();
	printf("soma: %d", soma);
}
