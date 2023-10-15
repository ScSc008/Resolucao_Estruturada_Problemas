#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 6
/*9.	Faça programa que leia uma matriz 3 x 6 com valores reais.
(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.
*/
void recebe(float mt[TL][TC]){
	int i,j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("matriz[%d][%d]: ", i, j);
			scanf("%f", &mt[i][j]);
		}
	}
}

void soma(float mt[TL][TC]){
	float s, aux;
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if( i == 0 && j == 0){
				s = 0;
			}
			aux = j % 2;
			if(aux != 0){
				s += mt[i][j];
			}
		}
	}
	printf("\nsoma dos valores das colunas impares: %0.2f", s);
}

void media(float mt[TL][TC]){
	float m, s;
	int i, j, cont;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if( i == 0 && j == 0){
				cont = 0;
				s = 0;
				m = 0;
			}
			if(j == 2 || j == 4){
				s += mt[i][j];
				cont++;
			}
		}
	}
	m = s / cont;
	printf("\nmedia das colunas 2 e 4: %0.2f", m);
}

void col6(float mt[TL][TC]){
	int i, j;
	
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			if(j == 0){
				mt[i][TC - 1] = mt[i][j] + mt[i][j + 1];
			}
			if(j == 0){
				mt[i][TC - 1] = mt[i][j] + mt[i][j + 1];
			}
			if(j == 0){
				mt[i][TC - 1] = mt[i][j] + mt[i][j + 1];
			}
		}
	}
					
}

void exibir(float mt[TL][TC]){
	int i,j;
	
	printf("\n");
	for(i = 0; i < TL; i++){
		for(j = 0; j < TC; j++){
			printf("%0.2f |", mt[i][j]);
		}
	printf("\n");
	}
}

void main(){
	float mt[TL][TC];
	
	recebe(mt);
	soma(mt);
	media(mt);
	col6(mt);
	exibir(mt);
}