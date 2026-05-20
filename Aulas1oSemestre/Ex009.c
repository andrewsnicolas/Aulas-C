//
// Created by Nicolas on 30/04/2026.
// Exercicio 20
#include <stdio.h>
void Exibir(int vetor[]);
int main() {
    int vetor[10];
    int vetorInvertido[10];
    int i = 9;
    for (int c = 0; c < 10; c++) {
        printf("Digite o %d valor do vetor: ", c+1);
        scanf("%d", &vetor[c]);
        vetorInvertido[i-c] = vetor[c];
    }
    printf("Valores vetor principal \n");
    Exibir(vetor);
    printf("\n");
    printf("Valores vetor invertido \n");
    Exibir(vetorInvertido);
    return 0;
}
void Exibir(int vetor[]) {
    for (int c = 0; c < 10; c++) {
        printf("%d; ", vetor[c]);
    }
}
