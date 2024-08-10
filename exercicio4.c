#include <stdio.h>
int main() {
	float n1, n2, n3, n4, resul;
	char escolha;
	printf("Escolha o tipo de media:\n\tA -Aritmetica\n\tP -Ponderada\n\tH -Harmonica\n");
	scanf("%c",&escolha);
	printf("Nota 1:");
	scanf("%f",&n1);
	printf("Nota 2:");
	scanf("%f",&n2);
	printf("Nota 3:");
	scanf("%f",&n3);
	printf("Nota 4:");
	scanf("%f",&n4);
	if(escolha == 'A'){
		resul = (n1 + n2 + n3 + n4) / 4;
		scanf
		printf("O Resultado da media Aritmetica e: %d", resul);
	}
	if(escolha == 'P'){
		resul = (2 * n1 + 3 * n2 + 5 * n3 + 10 * n4) / 20;
		printf("O Resultado da media Ponderada e: %d", resul);
	}
	if(escolha == 'H'){
		resul = 4 / (1 / n1 + 1 / n2 + 1 / n3 + 1 / n4);
		printf("O Resultado da media Harmonica e: %d", resul);
	}
	return 0;
}
