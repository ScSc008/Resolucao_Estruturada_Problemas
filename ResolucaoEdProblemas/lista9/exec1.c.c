#include <stdio.h>
#include <conio.h>

#define tf 10

//1.	Carregar um vetor X de 10 elementos com o valores de 10 em 10 e exibi-lo no final.

void carregar(int vetor[tf]){
	int i = 0;
	
	for(i = 0; i < 10; i++){
		vetor[i] = i * 10 + 10;
	}
}

void exibir(int vetor[tf]){
	int i = 0;
	
	for(i = 0; i < tf; i++){
		printf("\nvetor[%d] = %d", i, vetor[i]);
	}
}

void main(){
	int vetor[tf];
	
	carregar(vetor);
	exibir(vetor);
}
