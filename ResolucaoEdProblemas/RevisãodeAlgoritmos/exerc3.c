#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima na tela 
//a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste

void main(){
	int  n;

	printf("informe o cod do produto");
	scanf("%i", &n);
	
	switch(n){
		case 1:
			printf("origem: sul");
		break;
		case 2:
			printf("origem: norte");
		break;
		case 3:
			printf("origem: leste");
		break;
		case 4:
			printf("origem: oeste");
		break;
		case 5 ... 6:
			printf("origem: nordeste");
		break;
		case 7 ... 9:
			printf("origem: sudeste");
		break;
		case 10:
			printf("origem: centro-oeste");
		break;
		case 11:
			printf("origem: noroeste");
		break;
	}
}
