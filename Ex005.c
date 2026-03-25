#include <stdio.h>
int main()
{
    int k;
    int num[k];
    printf("Digite a quantidade de numeros que voce ira digitar: ");
    scanf("%d", &k);
    for (int i = 0; i<k; i++)
    {
        scanf("%d", &num[i]);
    }
}