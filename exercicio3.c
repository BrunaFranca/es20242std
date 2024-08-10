#include <stdio.h>
int main() {
	int maior, menor, valor;
	printf("Primeiro numero:");
	scanf("%d",&valor);
	maior = valor;
	menor = valor;
	printf("Segundo numero:");
	scanf("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
	}
	printf("Terceiro numero:");
	scanf("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
	}
	printf("Quarto numero:");
	scanf("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
	}
	printf("Quinto numero:");
	scanf("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if (valor < menor){
		menor = valor;
	}
	printf("O maior numero dos 5 digitados e %d e o menor %d.", maior, menor);
	return 0;
}
