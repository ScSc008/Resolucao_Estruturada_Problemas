#include <stdio.h>
#include <conio.h>

//2.	Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.

int idade(int ano){
	int id, a = 2023;
	
	id = a - ano;
	return id;
}

void main(){
	int i, a;
	
	printf("informe o ano do seu nascimento: ");
	scanf("%d", &a);
	
	i = idade(a);
	printf("idade: %d", i);
}
