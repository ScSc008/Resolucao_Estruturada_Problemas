#include <stdio.h>
#include <conio.h>

#define TF 2

/*3.	Criar um algoritmo que armazene os dados das participantes em um concurso de beleza conforme abaixo:

- nome
- altura
- cor preferida (1-branco, 2-vermelho, 3-amarelo, 4-Verde)
- cor dos olhos (1-castanho, 2-preto, 3-azul, 4-verde)

O algoritmo deverá ter as seguintes funcionalidades:

a.	Ler os dados de 7 participantes ok
b.	Exibir todos os dadas as participantes ok
c.	Exibir o nome e a altura da participante mais alta ok
d.	Exibir o nome e a altura da participante mais baixa ok
e.	Exibir a média geral das participantes ok
f.	Exibir quantas participantes estão acima da média ok
g.	Exibir quantas participantes possuem olhos azul ok
h.	Exibir a média de altura das participantes que possuem como cor preferida o verde
*/

struct rpg {
    char n[50];
    float alt;
    int cor;
    int olho;
};

void f(struct rpg ficha[TF]){
	int i;
	
    for(i = 0; i < TF; i++){
    	fflush(stdin);
		printf("nome: ");
        gets(ficha[i].n);
        printf("altura: ");
        scanf("%f", &ficha[i].alt);
        printf("informe a cor preferida:  (1-branco, 2-vermelho, 3-amarelo, 4-verde): ");
        scanf("%d", &ficha[i].cor);
        printf("cor dos olhos (1-castanho, 2-preto, 3-azul, 4-verde): ");
        scanf("%d", &ficha[i].olho);
    }
}

void exibir(struct rpg ficha[TF]){
	int i;
	
    for(i = 0; i < TF; i++){
		printf("\n\nnome: %s", ficha[i].n);
        printf("\naltura: %0.2f", ficha[i].alt);
        printf("\ninforme a cor preferida: %d", ficha[i].cor);
        printf("\ncor dos olhos %d", ficha[i].olho);
    }
}

void maior(struct rpg ficha[TF]){
    int m = 0, b, i;

    for(i = 1; i < TF; i++){
    	if(i == 0){
    		m = ficha[i].alt;
		}
        if(ficha[i].alt > m){
            m = ficha[i].alt;
            b = i;
        }
    }
    printf("\nNome: %s", ficha[b].n);
    printf("\nAltura: %0.2f", m);
}

void menor(struct rpg ficha[TF]){
    int m = 0, b, i;

    for(i = 1; i < TF; i++){
    	if(i == 0){
    		m = ficha[i].alt;
		}
        if (m < ficha[i].alt){
            m = ficha[i].alt;
            b = i;
        }
    }
    printf("\nNome: %s", ficha[b].n);
    printf("\nAltura: %0.2f", m);
}

float media(struct rpg ficha[TF]){
    float soma = 0, m;
    int i;

    for(i = 0; i < TF; i++){
        soma += ficha[i].alt;
    }
	m = soma / TF;
	
	return m;
}

void acima(struct rpg ficha[TF]){
    int cont = 0, i;

    for(i = 0; i < TF; i++){
        if (ficha[i].alt > media(ficha)){
            cont++;
        }
    }
	printf("\nquantidade de participantes acima da media: %d", cont);
}

void azul(struct rpg ficha[TF]){
    int cont = 0, i;

    for(i = 0; i < TF; i++){
        if(ficha[i].olho == 3){ 
            cont++;
        }
    }
	printf("\nquantidade de participantes com os olhos azuis: %d", cont);
}

void verde(struct rpg ficha[TF]){
    float soma = 0, m = 0;
    int cont = 0, i;

    for(i = 0; i < TF; i++){
        if(ficha[i].cor == 4){ 
            soma += ficha[i].alt;
            cont++;
        }
    }
    m = soma / cont;
    printf("\nmedia da altura de participantes que gostam de verde: %0.2f", m);
}

int main(){
	float m;
    struct rpg ficha[TF];

    f(ficha);
    exibir(ficha);
    maior(ficha);
    menor(ficha);
    m = media(ficha);
    printf("\nmedia de altura das participantes: %0.2f", m);
    acima(ficha);
    azul(ficha);
    verde(ficha);
}