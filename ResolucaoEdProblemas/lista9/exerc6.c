#include <stdio.h>
#include <conio.h>

#define tf 10

//6.	Criar um programa para ler um vetor de dez números reais; e mostrar os números contidos nos índices pares.

void recebe(float vetor[tf]){
	int i;
	
	for(i = 0; i < tf; i++){
		printf("informe n: ");
		scanf("%d", &vetor[i]);
	}
}
void exibir(float vetor[tf]){
	int i, a;
	
	for(i = 0; i < tf; i++){
	
		a = i % 2;
		
		if(a == 0){
			printf("\nvetor[%d]: %d", i, vetor[i]);
		}
	}
}

void main(){
	float vetor[tf];
	
	recebe(vetor);
	exibir(vetor);
}
