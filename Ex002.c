#include <stdio.h>
int main() {
    int num = 0, maior, entrada;
    do {
        printf("Digite a quantidade de numeros que vai digitar\n");
        scanf("%d", &num);
    }while (num<1);
    for (int c = 0; c < num; c++) {
        printf("\nDigite o %d valor\n", (c+1));
        scanf("%d", &entrada);
        if (c==0) maior=entrada;
        if(entrada>maior) maior = entrada;
    }
    printf("\nO maior numero eh %d\n", maior);
    return 0;
}