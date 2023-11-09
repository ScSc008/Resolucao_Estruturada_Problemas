#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 2

/*2.	Criar um algoritmo que que armazene os dados dos alunos de uma determinada turma conforme abaixo:

- nome
- número de faltas
- nota1
- nota2
- média (a média deverá ser calcula pelo programa)

O algoritmo deverá ter as seguintes funcionalidades:

a.	Ler uma turma de 5 alunos ok
b.	Exibir todos os dados dos alunos lidos ok
c.	Exibir o nome e a nota do aluno com maior média ok
d.	Exibir o nome e a nota do aluno com menor média ok
e.	Exibir a média geral da turma ok
f.	Exibir quantos alunos possuem média >= 7 ok
g.	Exibir quantos alunos estão abaixo da média 7 ok
h.	Exibir quantos alunos possuem mais que 20 faltas*/

struct rpg{
	char n[25];
	int falt;
	float n1;
	float n2;
	float m;
};

void alunos(struct rpg ficha[TF]){
	int i;
	
	for(i = 0; i < TF; i++){
		fflush(stdin);
		printf("\nnome: ");
		gets(ficha[i].n);
		printf("\nquantidade de faltas: ");
		scanf("%d", &ficha[i].falt);
		printf("\nnota 1: ");
		scanf("%f", &ficha[i].n1);
		printf("\nnota 2: ");
		scanf("%f", &ficha[i].n2);
	}
}

void media(struct rpg ficha[TF]){
	int i;
	
	for(i = 0; i < TF; i++){
		ficha[i].m = (ficha[i].n1 + ficha[i].n2)/2;
	}
	
}

void exibir(struct rpg ficha[TF]){
	int i;
	
	for(i = 0; i < TF; i++){
		printf("\nnome: %s", ficha[i].n);
		printf("\nfaltas: %d", ficha[i].falt);
		printf("\nnota: %0.2f", ficha[i].n1);
		printf("\nnota: %0.2f", ficha[i].n2);
		printf("\nmedia: %0.2f", ficha[i].m);
	}
}

void maior(struct rpg ficha[TF]){
	int i, b;
	float aux;
	
	for(i = 0; i < TF; i++){
		if(i == 0){
			aux = ficha[i].m;
		}
		if(aux < ficha[i].m){
			aux = ficha[i].m;
			b = i;
		}
	}
	printf("\n\n<<<maior media>>>\n");
	printf("\nnome do aluno: %s", ficha[b].n);
	printf("\nmaior media: %0.2f\n", aux);
}

void menor(struct rpg ficha[TF]){
	int i, b;
	float aux;
	
	for(i = 0; i < TF; i++){
		if(i == 0){
			aux = ficha[i].m;
		}
		if(aux > ficha[i].m){
			aux = ficha[i].m;
			b = i;
		}
	}
	printf("\n\n<<<maior media>>>\n");
	printf("\nnome do aluno: %s", ficha[b].n);
	printf("\nmenor media: %0.2f\n", aux);
}

void turma(struct rpg ficha[TF]){
	int i;
	float m, aux = 0;
	
	for(i = 0; i < TF; i++){
		aux += ficha[i].m;
	}
	m = aux/TF;
	
	printf("\nmedia da turma: %0.2f", m);
	
}

void media_(struct rpg ficha[TF]){
	int i, cont = 0;
	
	for(i = 0; i < TF; i++){
		if(ficha[i].m >= 7){
			cont++;
		}
	}
	printf("\nquantidade de alunos que possuem media maior ou igual a 7: %d", cont);
}

void med_(struct rpg ficha[TF]){
	int i, cont = 0;
	
	for(i = 0; i < TF; i++){
		if(ficha[i].m < 7){
			cont++;
		}
	}
	printf("\nquantidade de alunos que possuem media menor que 7: %d", cont);
}

void falta(struct rpg ficha[TF]){
	int i, cont = 0;
	
	for(i = 0; i < TF; i++){
		if(ficha[i].falt > 20){
			cont++;
		}
	}
	printf("\nquantidade de alunos que possuem mais que 20 faltas: %d", cont);
}

void main(){
	
	struct rpg ficha[TF];
	
	alunos(ficha);
	media(ficha);
	
	exibir(ficha);
	maior(ficha);
	menor(ficha);
	turma(ficha);
	media_(ficha);
	med_(ficha);
	falta(ficha);
}