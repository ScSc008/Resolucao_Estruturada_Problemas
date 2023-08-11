#include <stdio.h>
#include <conio.h>

//6 - Escreva um procedimento que lei 3 números e ao final subtraia o primeiro do segundo e dívida o resultado pelo terceiro.
// Fazer a chamada no programa principal.

void sub3(){
	int n1, n2, n3, sub;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	printf("informe n3: ");
	scanf("%d", &n3);
	
	sub = (n2 - n1) - n3; 
	
	printf("soma: %d", sub);
}

int main(){
	sub3();
}
