#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

void define(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("informe o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
}

void maior(int mt[TL][TC]){
	int i, j, cont = 0;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if(mt[i][j] > 10){
				printf("\n matriz[%d][%d]: %d", i, j, mt[i][j]);
				cont++;
			}
		}
	}
	if(cont == 0){
		printf("\n todos os valores sao inferiores a dez");
	}
}

void main(){
	int mt[TL][TC];
	
	define(mt);
	maior(mt);
}