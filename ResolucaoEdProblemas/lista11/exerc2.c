#include <stdio.h>
#include <conio.h>
#include <string.h>

/*2.	Escreva uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador de acordo com a tabela abaixo:   

Idade			Categoria
5 a 7 anos		Infantil A
8 a 10 anos		Infantil B
11-13 anos		Juvenil A
14-17 anos		Juvenil B
>= 18 anos		Adulto
*/
char * categoria(int i){
	if(i >= 5 && i <= 7){
		return "infantil A";
	}
	if(i >= 8 && i <= 10){
		return "infantil B";
	}
	if(i >= 11 && i <= 13){
		return "juvenil A";
	}
	if(i >= 14 && i <= 17){
		return "juvenil B";
	}
	if(i >= 18){
		return "adulto";
	}
}

void main(){
	int i;
	
	printf("informe idade: ");
	scanf("%d", &i);
	printf("categoria: %s", categoria(i));
}
