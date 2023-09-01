#include <stdio.h>
#include <conio.h>

#define tf 10

//4.	Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0. Escrever o vetor C modificado.

void recebe(int vetor[tf]){
	int i, n;
	
	for(i = 0; i < tf; i++){
		printf("informe n: ");
		scanf("%d", &n);
		
		if(n < 0){
			vetor[i] = 0;
		}
		else{
			vetor[i] = n
			;
		}
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
