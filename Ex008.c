#include <stdio.h>
//
// Created by Nicolas on 30/04/2026.
// Exercício 15
int main() {
    int vetorA[10];
    int vetorB[10];
    int soma = 0;
    int c = 0;
    for (int i=0; i<10; i++) {
        printf("Digite o valor para a %d posicao do vetor A", i+1);
        scanf("%d", &vetorA[i]);
        if (vetorA[i]%2==1) {
            soma += vetorA[i];
            vetorB[c] = i;
            c++;
        }
    }
    printf("A soma dos valores impares do vetor A é: %d\n", soma);
    for (int i=0; i<c; i++) printf("%d; ", vetorB[i]);
    return 0;
}
