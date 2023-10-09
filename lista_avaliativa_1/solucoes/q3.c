#include <stdio.h>

int main(){
	int senha, novaSenha;

	scanf("%d", &senha);
	printf("senha cadastrada: %d\n", senha);

	while(1){
		scanf("%d", &novaSenha);
		
		if(novaSenha == senha){
			printf("senha valida!\n");
			break;
		} else {
			printf("senha invalida!\n");
		}
	}

	return 0;


}
