#include <stdio.h>
#include <conio.h>

//2 - Escreva um procedimento que leia seu nome e ap�s a leitura e exiba o nome lido. 
//Este procedimento dever� ser chamado atrav�s do programa principal.

void nome(){
	char n[30];
	
	printf("informe o seu nome: ");
	scanf("%s", &n);
	printf("nome: %s", n);
}
int main(){
	nome();
}
