#include <stdio.h>

int main(){
	int a, b, maior, menor;

	scanf("%d", &a);
	scanf("%d", &b);

	if(a == b){
		printf("Os valores lidos sao iguais\n");
	} else {
		maior = (a > b) ? a : b;
		menor = (a < b) ? a : b;

		printf("%d eh maior que %d\n", maior, menor);
		
		if(menor != 0 && maior % menor == 0){
			printf("%d eh multiplo de %d\n", maior, menor);
		} else {
			printf("%d nao eh multiplo de %d\n", maior, menor);
		}

	}
	return 0;
}
