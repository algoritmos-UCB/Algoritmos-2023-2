#include <stdio.h>

int main(){
  int vetor[10];

  for(int i = 0;i < 10;i++){
    scanf("%d", &vetor[i]);
  }

  for(int i = 0;i < 10;i++){
    for(int j = 0;j < 10 - i;j++){
      printf("%d", vetor[j]);
      if(j < 9 - i){
        printf(" ");
      }
      vetor[j] = vetor[j+1] + vetor[j];
    }
    printf("\n");
  }

  return 0;
}
