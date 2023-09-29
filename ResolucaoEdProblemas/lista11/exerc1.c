#include <stdio.h>
#include <conio.h>
#include <string.h>

//1.	Escreva uma função que retorne a mensagem "olá mundo!". Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.

char * ola(){
	return"ola mundo";
}

void main(){
	printf("retorno: %s", ola());
}
