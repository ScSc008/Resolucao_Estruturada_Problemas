#include <stdio.h>
#include <conio.h>

//2 - Escreva uma fun��o que leia 4 n�meros,
// ap�s a leitura multiplique todos e retorne o resultado. Est� fun��o dever� ser chamada atrav�s do programa principal. Exibir conte�do retornado.

int mult(){
	int n1, n2, n3, n4, m;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	printf("informe n3: ");
	scanf("%d", &n3);
	printf("informe n4: ");
	scanf("%d", &n4);
	
	m = n1 * n2 * n3 * n4;
	
	return m;
}

void main(){
	int m;
	
	m = mult();
	printf("multiplicacao: %d", m);
}
