#include <stdio.h>
#include <conio.h>

#define tf 5

//2.	Preencher um vetor A de 5 elementos com os n�meros fornecidos pelos usu�rios.  Escrever o vetor A ap�s o seu total preenchimento.

void receber(int vetor[tf]){
	int i;
	
	for(i = 0; i < tf; i++){
		printf("informe n: ");
		scanf("%d", &vetor[i]);
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
	
	receber(vetor);
	exibir(vetor);
}
