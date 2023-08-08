#include <stdio.h>
#include <conio.h>

void main(){
	float raio, area;
	
	printf("informe o raio de um circulo: \n");
	scanf("%f", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("\n area do circulo: %0.2f", area);
}

