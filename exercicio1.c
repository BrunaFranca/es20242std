#include <stdio.h>
int main() {
	int num;
	printf("Digite um numero:");
	scanf("%d",&num);
	if (num % 5 == 0){
		printf("O numero %d digitado e divisivel por 5.",num);
	}
	else{
		printf("O numero %d digitado nao e divisivel por 5.",num);
	}
	
	return 0;
}
