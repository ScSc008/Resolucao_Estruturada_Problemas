#include <stdio.h>
#include <conio.h>

//4 - Escreva um procedimento que leia 2 números, após a leitura somar e exibir o resultado.
// Este procedimento deverá ser chamado através do programa principal.

void soma(){
	int n1, n2, s;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	
	s = n1 + n2;
	
	printf("soma: %d", s);
}

int main(){
	soma();
}
