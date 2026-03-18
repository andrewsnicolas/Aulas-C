//
// Created by lab53 on 18/03/2026.
//
#include <stdio.h>
int main() {

    int menor, k = 0, num, quant;

    do {
        printf("\nQual eh a quantidade de numeros que voce ira digitar?\n");
        scanf("%d", &k);
    } while (k<1);

    for (int c = 0; c < k; c++) {
        printf("\nDigite o %d numero: \n", (c+1));
        scanf("%d", &num);
        if (c==0) menor = num;
        if (menor>num) {
            menor = num;
            quant = 1;
        }
        else if (menor==num) quant++;
    }

    printf("\nO menor numero eh o %d e ele aparece %d vez(es)", menor, quant);
    return 0;
}