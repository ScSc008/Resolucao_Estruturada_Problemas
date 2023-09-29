#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*2.3.	Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
a) da linha 3
b) da coluna 2
c) de todos os elementos da matriz
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

void somal3(int mt[TL][TC]){
	int i, j, soma;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			if(i == 0 && j == 0){
				soma = 0;
			}
			if(i == 3){
				soma += mt[i][j];
			}
		}
	}
	printf("\nsoma da linha 3: %d", soma);
}

void somac2(int mt[TL][TC]){
	int i, j, s2;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			if(i == 0 && j == 0){
				s2 = 0;
			}
			if(j == 2){
				s2 += mt[i][j];
			}
		}
	}
	printf("\nsoma da coluna 2: %d", s2);
}

void somaMAT(int mt[TL][TC]){
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
	somal3(mt);
	somac2(mt);
	somaMAT(mt);
}
