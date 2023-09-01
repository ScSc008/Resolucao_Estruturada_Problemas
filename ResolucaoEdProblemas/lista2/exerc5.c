#include <stdio.h>
#include <conio.h>

//5 - Escreva um procedimento que leia 4 números, após a leitura multiplique todos e exibir o resultado.
// Este procedimento deverá ser chamado através do programa principal.

void mult4(){
	int n1, n2, n3, n4, mult;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	printf("informe n3: ");
	scanf("%d", &n3);
	printf("informe n4: ");
	scanf("%d", &n4);
	
	mult = n1 * n2 * n3 * n4;
	
	printf("soma: %d", mult);
} 

int main(){
	mult4();
}
