#include <stdio.h>
#include <conio.h>


//7 - Escreva um procedimento que ao realizar a leitura de um número qualquer, 
//seja capaz de verificar se o mesmo é positivo ou negativo. Fazer a chamada no programa principal.

void positivo(){
	int n1;
	
	printf("informe n1: ");
	scanf("%d", &n1);
	
	if(n1 > 0){
		printf("\npositivo");
	}
	else{
		if(n1 < 0){
			printf("\nnegativo");
		}
		else{
			if(n1 == 0){
				printf("\nneutro");
			}
		}
	}
}

int main(){
	positivo();
}
