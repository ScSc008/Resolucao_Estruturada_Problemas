#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*3.	Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/

void define(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("informe o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
}
void exibir(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("%d |", mt[i][j]);
		}
		printf("\n");
	}
}

void maior(int mt[TL][TC]){
	int i, j, m, l, c;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if(i == 0 && j == 0){
				m = mt[i][j];
				l = i;
				c = j;
			}
			if(mt[i][j] > m){
				m = mt[i][j];
				l = i;
				c = j;
			}
		}
	}
	printf("maior: matriz[%d][%d]: %d", l, c, m);
}


void main(){
	int mt[TL][TC];
	
	define(mt);
	exibir(mt);
	maior(mt);
}
