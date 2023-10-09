#include <stdio.h>

int main(){
	int valor, valorCopia, soma = 0;

	scanf("%d", &valor);
	
	valorCopia = valor;

	while(valorCopia){
		soma += valorCopia%10;
		valorCopia /= 10;
	}

	if(!(valor%2)){
		printf("%d eh par\n", valor);
	} else {
		printf("%d eh impar\n", valor);
	}
	
	printf("A soma dos algarismos de %d eh %d\n", valor, soma);

	return 0;
}
