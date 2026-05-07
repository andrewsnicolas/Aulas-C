//
// Created by Nicolas on 06/05/2026.
//
#include <stdio.h>

int vetorA[12];
void MostrarMaior121() {
    for (int i = 0; i < 12; i++)
        if (vetorA[i] > 121)
            printf("\n Na posicao %d, foi encontrado o valor %d (maior que 121).", i, vetorA[i]);
}
void RecebaNumeros() {
    for (int i = 0; i < 12; i++) {
        printf("\n Digite o %d valor do vetor A: ", i + 1);
        scanf("%d", &vetorA[i]);
    }
}
void Exibir() {
    printf("\n Vetor A: \n");
    for (int i = 0; i < 12; i++)
        printf("%d, ", vetorA[i]);
}
int main() {
    RecebaNumeros();
    MostrarMaior121();
    Exibir();
    int maiorNumero = -99999999;
    for (int i = 0; i < 12; i++)
        if (maiorNumero < vetorA[i]) maiorNumero = vetorA[i];
    printf("\n O maior numero do vetor A eh: %d \n", maiorNumero);
    return 0;
}