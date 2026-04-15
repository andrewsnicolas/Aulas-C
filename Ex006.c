#include <stdio.h>

int main() {
    float vetorA[5];
    float ac = 0;
    for (int i= 0; i < 5; i++) {
        do {
            printf("Digite um valor POSITIVO para a posicao %d do vetor A: ", (i+1));
            scanf("%f", &vetorA[i]);
        } while (vetorA[i] <= 0);
        ac += vetorA[i];
    }
    //system("cls");
    printf("Resultado: %.2f", ac);
    int exit;
    scanf("%d", &exit);
    return 0;
}
