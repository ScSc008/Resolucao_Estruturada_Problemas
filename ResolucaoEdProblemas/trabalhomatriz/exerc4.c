#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*4.	Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.*/

void define(int a[TL][TC], int b[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("informe o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("informe o valor da matriz2[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
}
void exibir(int c[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("%d |", c[i][j]);
		}
		printf("\n");
	}
}

void maior(int a[TL][TC], int b[TL][TC], int c[TL][TC]){
	int i, j, m;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if(i == 0 && j == 0){
				c[i][j] = b[i][j];	
			}
			if(a[i][j] > c[i][j]){
				c[i][j] = a[i][j];
			}
		}
	}
}


void main(){
	int a[TL][TC], b[TL][TC], c[TL][TC];
	
	define(a, b);
	maior(a, b, c);
	exibir(c);
}
