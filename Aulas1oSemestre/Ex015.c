//
// Created by Andrews, Igor, Lucas
#include <stdio.h>
#include <ctype.h>
float Peso_Ideal(float alt, char sexo) {
    float pesoIdeal = 0;
    if (tolower(sexo) == 'm')
        pesoIdeal = (72.7*alt) -58;
    else
        pesoIdeal = (62.1 * alt) - 44.7;
    return pesoIdeal;
}
int main() {
    char sexo;
    float altura = 0, pesoIdeal = 0;
    printf(" Digite o seu sexo \n Coloque M para masculino \n Coloque F para feminino\n :");
    scanf(" %c", &sexo);
    while (tolower(sexo) != 'm' && tolower(sexo) != 'f') {
        printf("");
        printf("SEXO INVALIDO\nDIGITE NOVAMENTE SEU SEXO");
        printf(" Digite o seu sexo \n Coloque M para masculino \n Coloque F para feminino\n :");
        scanf(" %c", &sexo);
    }
    printf(" Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    while (altura <= 0 || altura > 2.75) {
        printf("");
        printf("ALTURA INVALIDO\nDIGITE NOVAMENTE SUA ALTURA");
        printf(" Digite a sua altura: ");
        scanf("%f", &altura);
    }
    pesoIdeal = Peso_Ideal(altura, sexo);
    printf("\n Sua altura ideal eh: %.2f", pesoIdeal);
    return 0;
}
