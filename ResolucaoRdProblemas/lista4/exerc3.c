#include <stdio.h>
#include <conio.h>

//3 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 4 Notas
//3 - Multiplicação de 2 Número
//4 - Divisão de 2 Número
//5 - Sair

int um(){
	int a, ano, idade;
	
	printf("informe o ano de nascimento: ");
	scanf("%d", &a);
	printf("informe o ano atual: ");
	scanf("%d", &ano);
	
	idade = ano - a;
		
	printf("idade: %d", idade);
}

int dois(){
	float n1, n2, n3, m;

	printf("informe n1: ");
	scanf("%f", &n1);
	printf("informe n2: ");
	scanf("%f", &n2);
	printf("informe n3: ");
	scanf("%f", &n3);
	
	m = (n1 + n2 + n3)/3;
	
	printf("média: %f", m);
}

int tres(){
	int n1, n2;

	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("n1 é maior que n2!");
	}
	else{
		printf("n2 é maior que n1!");
	}
}

int quatro(){
	int n1, n2;

	printf("informe n1: ");
	scanf("%d", &n1);
	printf("informe n2: ");
	scanf("%d", &n2);
	
	if(n1 < n2){
		printf("n1 é menor que n2!");
	}
	else{
		printf("n2 é menor que n1!");
	}
}


void main(){
	int n = 0;
	
	do{
		printf("\ninforme a opcao: ");
		printf("\n1- calcular idade");
		printf("\n2- media de 3 notas");
		printf("\n3- maior");
		printf("\n4- menor");
		printf("\n5- sair");
		printf("\ninforme a opcao: ");
		scanf("%d", &n);
		
		switch(n){
			case 1:
				um();
			break;
			case 2:
				dois();
			break;
			case 3:
				tres();
			break;
			case 4:
				quatro();
			break;
			case 5:
				
			break;
		}
	}while(n != 5);
}
