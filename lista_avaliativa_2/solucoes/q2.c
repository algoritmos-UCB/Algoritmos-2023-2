#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct jogador {
	char nome[50];
	char posicao;
	int forca;
} Jogador;


double calculaForcaTime(Jogador* jogadores) {
    double forcaTime = 0.0;
    for (int i = 0; i < 11; i++) {
        if (jogadores[i].posicao == 'G') {
            forcaTime += 8 * jogadores[i].forca;
        } else if (jogadores[i].posicao == 'L') {
            forcaTime += 10 * jogadores[i].forca;
        } else if (jogadores[i].posicao == 'Z') {
            forcaTime += 5 * jogadores[i].forca;
        } else if (jogadores[i].posicao == 'V') {
            forcaTime += 8 * jogadores[i].forca;
        } else if (jogadores[i].posicao == 'M') {
            forcaTime += 11 * jogadores[i].forca;
        } else if (jogadores[i].posicao == 'A') {
            forcaTime += 12 * jogadores[i].forca;
        }
    }
    return forcaTime/100;
}


int main(){
	char nomeTime1[50], nomeTime2[50], linha[100];
  double forcaTime1, forcaTime2;
	Jogador jogadores[11];
	fgets(nomeTime1, 50, stdin);
	nomeTime1[strcspn(nomeTime1, "\n")] = 0; // remove \n do fim da string

	for(int i = 0;i < 11;i++){
		fgets(linha, 100, stdin);
		char* token = strtok(linha, ";");
		strcpy(jogadores[i].nome, token);
		token = strtok(NULL, ";");
		jogadores[i].posicao = token[0];
		token = strtok(NULL, ";");
		jogadores[i].forca = atoi(token);
	}
	forcaTime1 = calculaForcaTime(jogadores);
	fgets(nomeTime2, 50, stdin);
	nomeTime2[strcspn(nomeTime2, "\n")] = 0; // remove \n do fim da string
	for(int i = 0;i < 11;i++){
		fgets(linha, 100, stdin);
		char* token = strtok(linha, ";");
		strcpy(jogadores[i].nome, token);
		token = strtok(NULL, ";");
		jogadores[i].posicao = token[0];
		token = strtok(NULL, ";");
		jogadores[i].forca = atoi(token);
	}
	forcaTime2 = calculaForcaTime(jogadores);
	printf("%s: %.2lf de forca\n", nomeTime1, forcaTime1);
	printf("%s: %.2lf de forca\n", nomeTime2, forcaTime2);
	if(forcaTime1 > forcaTime2){
		printf("%s eh mais forte\n", nomeTime1);
	} else {
		printf("%s eh mais forte\n", nomeTime2);
	}
	


	return 0;
}
