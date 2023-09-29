#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

/*4.	Carregar uma matriz 3x3 com número inteiros, gerar uma nova matriz com os número da matriz carregada, multiplicados por 2.
*/

void definir(int mt[TL][TC]){
	int i, j, s;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			printf("informe mt[%d][%d]: ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
}

void mult(int mt[TL][TC], int mt2[TL][TC]){
	int i, j;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			mt2[i][j] = mt[i][j] * 2;
		}
	}
}

void exibir(int mt2[TL][TC]){
	int i, j;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			printf("\nmatriz[%d][%d]: %d", i, j, mt2[i][j]);
		}
	}
}

void main(){
	int mt[TL][TC], mt2[TL][TC];
	
	definir(mt);
	mult(mt, mt2);
	exibir(mt2);
}
