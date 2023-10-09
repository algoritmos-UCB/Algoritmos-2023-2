#include<stdio.h>

int main(){
	int ano;
	scanf("%d", &ano);
	
	for(int anoOlim = 1896;anoOlim <= 2020;anoOlim += 4){
		if(ano == anoOlim && ano != 1916 && ano != 1940 && ano != 1944){
			printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
			return 0;
		}
	}

	for(int anoCopa = 1930;anoCopa <= 2022;anoCopa += 4){
		if(ano == anoCopa && ano != 1942 && ano != 1946){
			printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
			return 0;
		}
	}

	printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
	return 0;
}
