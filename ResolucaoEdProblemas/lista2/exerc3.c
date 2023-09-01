#include <stdio.h>
#include <conio.h>

//3 - Escreva um procedimento que leia seu nome e em uma segunda variável leia seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome.
// Este procedimento deverá ser chamado através do programa principal.

void nome(){
	char n[10], s[20];
	
	printf("informe o seu nome: ");
	scanf("%s", &n);
	printf("informe o seu sobrenome: ");
	scanf("%s", &s);
	printf("nome: %s %s", n, s);
}


int main(){
	nome();
}
