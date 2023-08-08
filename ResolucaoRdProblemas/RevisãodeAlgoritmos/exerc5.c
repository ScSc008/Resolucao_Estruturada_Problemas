#include <stdio.h>
#include <conio.h>

//5.[FOR] Criar um algoritmo em que leia dez números inteiros e imprima o maior 
//e o segundo maior número da lista.
void main(){
	int n = -1, maior = 0, maior2 = 0, i;
	
	
	for(i=1; i<= 10; i++){
		
		printf("n");
		scanf("%i", &n);
		if(n > maior){
			maior = n;
		}
		else{
			if(n < maior || n > maior2){
				maior2 = n;
			}
		}
	}
	printf("maior: %i", maior);
	printf("maior2: %i", maior2);
}

