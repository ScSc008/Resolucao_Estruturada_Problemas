#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

/*1.	Carregar uma matriz 3x3 e preencher com valores de 10 em 10 e exibir a soma da matriz no final.*/

void definir(int mt[TL][TC]){
	int i, j, s;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			if(i == 0 && j == 0){
				s = 0;
			}
			s += 10;
			mt[i][j] = s;
		}
	}
}

void exibir(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			printf("\nmatriz[%d][%d]: %d", i, j, mt[i][j]);
		}
	}
}
void soma(int mt[TL][TC]){
	int i, j, soma;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			if(i == 0 && j == 0){
				soma = 0;
			}
			soma += mt[i][j];
		}
	}
	printf("\nsoma da matriz: %d", soma);
	
}

void main(){
	int mt[TL][TC];
	
	definir(mt);
	exibir(mt);
	soma(mt);
}
