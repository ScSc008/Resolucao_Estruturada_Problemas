#include <stdio.h>
#include <stdio.h>

//1.	Escreva um procedimento que receba por parâmetro os valores de A e  B e retorne os valores invertidos,
// ou seja, A receberá o conteúdo de B e B receberá o conteúdo de A. O parâmetros deverão ser por referência.

void i(int *a, int *b){
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

void main(){
	int n1, n2;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	
	printf("antes: %d", n1);
	printf("\nantes: %d", n2);
	
	i(&n1, &n2);
	
	printf("\n\ndepois: %d", n1);
	printf("\ndepois: %d", n2);
}
