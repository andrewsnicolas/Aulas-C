#include <stdio.h>
int main() {
 int k = 0;
 int somMult5 = 0;
 int somMult3Imp = 0;
 int menorPar = 99999999;
 do {
  printf("\nDigite o valor de rodadas: ");
  scanf("%d", &k);
 } while (k<=0);
 int vetor[k];
 for (int i = 0; i<k; i++) {
  do {
   printf("\nDigite as pontuacoes inteiras obtida na partida %d: ", i+1);
   scanf("%d", &vetor[i]);
  } while (vetor[i]<=0);
  if ((vetor[i]%5) == 0) somMult5++;
  if ((vetor[i]%2) == 0) {
   if (vetor[i] < menorPar) menorPar = vetor[i];
  } else if (vetor[i]%3 == 0) somMult3Imp++;
 }
 if (somMult3Imp>0) printf("\nApareceram %d numeros impares e multiplos de 3", somMult3Imp);
 else printf("\nNao houve ocorrencias de numeros impares e multiplos de 3");
 if (somMult5) printf("\nApareceram %d numeros multiplos de 5", somMult5);
 else printf("\nNao houve ocorrencias de multiplos de 5");
 if (menorPar!=99999999) printf("\nO menor numero par encontrado foi: %d",menorPar);
 else printf("\nNao teve ocorrencia de numeros pares");
 return 0;
}