#include <stdio.h>
#include <stdio.h>

//2.	Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento),
// a data atual calcule a idade e retorne (Idade) por parâmetro.

void id(int *a, int *ano, int *i){
	*i = *ano - *a;
}
void main(){
	int a, ano, i ;
	
	printf("informe o ano de seu nascimento: ");
	scanf("%d", &a);
	printf("informe o ano atual: ");
	scanf("%d", &ano);
	
	id(&a, &ano, &i);
	
	printf("idade: %d", i);
}
