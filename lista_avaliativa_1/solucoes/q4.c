#include <stdio.h>

int main(){
	char nivel;
	float salario;

	scanf("%c", &nivel);
	scanf("%f", &salario);

	if(nivel == 'a'){
		printf("R$ %.2f\n", salario*1.05);
	}
	else if(nivel == 'b'){
		printf("R$ %.2f\n", salario*1.07);
	}
	else if(nivel == 'c'){
		printf("R$ %.2f\n", salario*1.08);
	}

	return 0;
}
