#include <stdio.h>
#include <conio.h>

//1 - Escreva uma fun��o que leia 2 n�meros, ap�s a leitura somar e retornar o resultado. 
//Est� fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.

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
