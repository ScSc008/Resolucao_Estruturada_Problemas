#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

/*5.	Leia uma matriz de 3 x 3 elementos. Calcule a média dos elementos que estão na diagonal principal.*/

void define(int mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("informe o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &mt[i][j]);
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


void diagonal(int mt[TL][TC]){
	int i, j, s, m, cont;

	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if(i == 0 && j == 0){
				s = 0;
				cont = 0;
			}
			if(i == j){
				s += mt[i][j];
				cont++;
			}
		}
	}
	m = s / cont;
	printf("media diagonal: %d", m);
}



void main(){
	int mt[TL][TC];

	define(mt);
	exibir(mt);
	diagonal(mt);
}
