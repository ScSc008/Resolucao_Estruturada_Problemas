#include <stdio.h>
#include <conio.h>

#define tf 5

//3.	Preencher um vetor B de 5 elementos com 1 se o numero informado pelo usuário ímpar e com 0 se for par.
// Escrever o vetor B após o seu total preenchimento.

void recebe(int vetor[tf]){
	int i;
	
	for(i = 0; i < tf; i++){
		printf("informe n: ");
		scanf("%d", &vetor[i]);
		vetor[i] = vetor[i] % 2;
	}
}
void exibir(int vetor[tf]){
	int i;
	
	for(i = 0; i < tf; i++){
		printf("\nvetor[%d]: %d", i, vetor[i]);
	}
}

void main(){
	int vetor[tf];
	
	recebe(vetor);
	exibir(vetor);
}
