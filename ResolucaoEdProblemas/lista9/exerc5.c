#include <stdio.h>
#include <conio.h>

#define tf 10

/*5.	Ler um vetor D de 10 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa,
ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Escrever todo o vetor D e todo o vetor E.*/

void receber(int vetor[tf], int v2[tf]){
	int i, n, x;
	
	for(i = 0, x = tf-1; i < tf; i++, x--){
		printf("informe n: ");
		scanf("%d", &n);
		vetor[i] = n;
		
		v2[x] = vetor[i];
	}
}
void exibir(int vetor[tf], int v2[tf]){
	int i, x;
	
	for(i = 0; i < tf; i++){
		printf("\nvetor[%d]: %d", i, vetor[i]);
	}
	printf("\n");
	for(x = 0; x < tf; x++){
		printf("\nv2[%d]: %d", x, v2[x]);
	}
}

void main(){
	int vetor[tf], v2[tf];
	
	receber(vetor, v2);
	exibir(vetor, v2);
}
