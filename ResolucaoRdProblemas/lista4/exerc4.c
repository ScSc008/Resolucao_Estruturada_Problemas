#include <stdio.h>
#include <conio.h>

//4 - Escreva uma função que retorne a idade de uma pessoa, 
//para calcular a idade será necessário conhecer o ano de nascimento e o ano atual. 
//Retornar e exibir no programa principal.

int idade(){
	int a, ano, i;
	
	printf("informe o ano de nascimento: ");
	scanf("%d", &a);
	printf("informe o ano atual: ");
	scanf("%d", &ano);
	
	i = ano - a;
	return i;
}

void main(){
	int id;
	
	id = idade();
	printf("idade: %d", id);
}
