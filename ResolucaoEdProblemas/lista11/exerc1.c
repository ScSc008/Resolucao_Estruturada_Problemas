#include <stdio.h>
#include <conio.h>
#include <string.h>

//1.	Escreva uma fun��o que retorne a mensagem "ol� mundo!". Est� fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.

char * ola(){
	return"ola mundo";
}

void main(){
	printf("retorno: %s", ola());
}
