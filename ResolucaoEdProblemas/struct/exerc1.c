#include <stdio.h>
#include <conio.h>

#define TF 2

/** 
1.	Desenvolva um programa que leia e exiba um vetor registro conforme o modelo abaixo:

- nome
- salário
- cpf
- idade
- sexo (1-Masculino; 2-Feminino)

Com base no modelo acima crie um programa que contenha um vetor de registros com 5 posições e faça:

a.	Criar um procedimento que leia os registros.  ok
b.	Criar um procedimento que exiba todos os registros.  ok
c.	Criar uma função que calcule a média salarial. ok
d.	Criar uma função que retorne o maior salário. ok
e.	Criar uma função que retorne à quantidade de pessoas do sexo feminino
**/

struct rpg{

	char nome[100];
	float salario;
	long long int cpf;
	int idade;
	int sexo; //1-Masculino; 2-Feminimo

};


void ficha(struct rpg registro[TF]){
	int i;
	
	for(i=0; i < TF ; i++){
		fflush(stdin);
		printf("Informe o Nome: ");
		gets(registro[i].nome);
		printf("Informe o Salario: ");
		scanf("%f", &registro[i].salario);
		printf("Informe o CPF: ");
		scanf("%d", &registro[i].cpf);
		printf("Informe a idade: ");
		scanf("%d", &registro[i].idade);
	
		do{
			printf("Informe o Sexo (1-M; 2-F): ");
			scanf("%d", &registro[i].sexo);
		}while(registro[i].sexo != 1 && registro[i].sexo != 2);
	}
}


void exibir(struct rpg registro[TF]){
	int i;

	for(i=0; i < TF ; i++){
		printf("\nNome: %s", registro[i].nome);
		printf("\nSalario: %0.2f", registro[i].salario);
		printf("\nCPF: %d", registro[i].cpf);
		printf("\nIdade: %d", registro[i].idade);
		if(registro[i].sexo == 1){
			printf("\nSexo: Masculino");
		}
		else{
			printf("\nSexo: Feminino");
		}
	}
}

float media(struct rpg registro[TF]){
	int i, qtde = 0, soma = 0;
	float m = 0;
	
	for(i=0; i < TF ; i++){
		registro[i].nome;
		qtde++;
		registro[i].salario;
		soma += registro[i].salario;
	}

	m = soma / qtde;
	
	return m;

}

float maior(struct rpg registro[TF]){
	int i, qtde = 0, m;
	
	for(i=0; i < TF ; i++){
		if(i == 0){
			m = registro[i].salario;
		}
		if(m < registro[i].salario){
			m = registro[i].salario;
		}
	}
	
	return m;

}

int qtd_sexo(struct rpg registro[TF]){
	int i, cont = 0;
	
	for(i=0; i < TF ; i++){
		if(registro[i].sexo == 2){
			cont++;
		}
	}
	
	return cont;

}

void main(){
	float med = 0, m = 0;
	int qtd = 0;
	
	struct rpg registro[TF];
	
	ficha(registro);
	exibir(registro);
	media(registro);
	med = media(registro);
	m = maior(registro);
	qtd = qtd_sexo(registro);
	printf("\nmedia salarial: %0.2f", med);
	printf("\nmaior salario: %0.2f", m);
	printf("\nquantidade de mulheres: %d", qtd);
}
