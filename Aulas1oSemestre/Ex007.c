//
// Created by Nicolas on 30/04/2026.
// Exercício 15 lista de vetores
#include <stdio.h>
int main() {
    float tempMenor= 9999999999999;
    float tempMaior=-256;
    float tempMedia = 0;
    float temperaturas[12];
    for (int c=0; c<12; c++) {
        printf("\nDigite a temperatura do %d mes: ", c+1);
        scanf("%f", &temperaturas[c]);
        tempMedia += temperaturas[c];
        if (tempMaior < temperaturas[c]) tempMaior = temperaturas[c];
        if (tempMenor > temperaturas[c]) tempMenor = temperaturas[c];
    }
    tempMedia /= 12;
    printf("\n A temperatura media eh: %.2f", tempMedia);
    printf("\n A menor temperatura foi: %.2f", tempMenor);
    printf("\n A maior temperatura foi: %.2f", tempMaior);
    printf("\n");
    for (int c=0; c<12; c++) printf("%.2f; ", temperaturas[c]);
    return 0;
}