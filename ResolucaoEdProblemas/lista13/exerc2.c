#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*2.	Carregar uma matriz 4x4 com n�meros fornecidos pelo usu�rio.
 Ao final ler um n�mero informado pelo usu�rio e procurar se o mesmo est� na matriz.*/

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
