#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*2.	Carregar uma matriz 4x4 com números fornecidos pelo usuário.
 Ao final ler um número informado pelo usuário e procurar se o mesmo está na matriz.*/

void definir(int mt[TL][TC]){
	int i, j, s;
	
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			printf("informe mt[%d][%d]: ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
}

void procurar(int mt[TL][TC]){
	int i, j, n, cont;
	
	printf("informe o numero que sera procurado: ");
	scanf("%d", &n);
	for(i = 0; i<TL; i++){
		for(j = 0; j<TC; j++){
			if(n == mt[i][j]){
				printf("\nencontrado em matriz[%d][%d]", i, j);
				cont++;
			}
		}
	}
	if(cont == 0){
		printf("\nnao encontrado");
	}
}

void main(){
	int mt[TL][TC];
	
	definir(mt);
	procurar(mt);
}
