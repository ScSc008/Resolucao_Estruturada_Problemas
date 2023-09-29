#include <stdio.h>
#include <conio.h>
#include <string.h>

/*3.	Faça um procedimento que receba uma string e a retorne escrita de trás pra frente.*/

void invert(char s){
	int i, x, fim;
	char aux;
	
	fim = strlen(s)
	for(i = 0, x = fim-1; i < x; i++, x--){
		aux = texto[i];
		texto[i] = texto[x];
		texto[x] = aux;
	}
}

void main(){
	char s[20];
	
	printf("digite uma palavra: ");
	gets(&s[20]);
	invert(s);
	printf("%s", s);
}
