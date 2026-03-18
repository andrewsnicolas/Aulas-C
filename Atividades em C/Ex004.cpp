//
// Created by lab53 on 18/03/2026.
//
#include <stdio.h>
int main() {
    float valor = 0;
    printf("Digite o valor para acréscimo de 10%%\n");
    scanf("%f", &valor);
    valor *= 1.1;
    printf("Resultado após o acréscimo é %.2f", valor);
    return 0;
}