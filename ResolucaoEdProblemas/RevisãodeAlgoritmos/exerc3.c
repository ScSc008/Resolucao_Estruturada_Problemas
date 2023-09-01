#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto e imprima na tela 
//a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste

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
