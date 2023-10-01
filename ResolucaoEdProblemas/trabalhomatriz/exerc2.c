#include <stdio.h>
#include <conio.h>

#define TL 5
#define TC 5

/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Escreva ao final a matriz obtida.*/

void define(int mt[TL][TC]){
	int i, j, cont = 0;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			mt[i][j] = 0;
		}
	}
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			cont++;
			mt[i][j] = + cont;
		}
	}
}
void exibir(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("\n matriz[%d][%d]: %d", i, j, mt[i][j]);
		}
	}
}

void diagonal(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if(i == j){
				mt[i][j] = 1;
			}
			else{
				mt[i][j] = 0;
			}
		}
	}
}



void main(){
	int mt[TL][TC];
	
	printf("matriz: \n");
	define(mt);
	exibir(mt);
	printf("\n\ndiagonal: \n");
	diagonal(mt);
	exibir(mt);
}