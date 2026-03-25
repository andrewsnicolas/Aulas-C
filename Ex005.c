#include <stdio.h>
#include <stdbool.h>
int n1=2, n2=7,n3=3;

void exibir(int c)
{
    if (c%3 == 1) n1 = n1*2;
    else if (c%3 == 2) n2 = n2*3;
    else n3 = n3*4;
}

int main()
{
    int k=0;
    bool verf = true;
    do
    {
        printf("Digite o número de elementos que você quer ver na sequência: \n");
        scanf("%d", &k);
    } while (k<2);
    printf("%d ", n1);
    printf("%d ", n2);
    printf("%d ", n3);
    n1 = n1*2;
    for (int i = 2; i<k; i++)
    {
        exibir(i);

        switch (i%3)
        {
            case 1:
            printf("%d ", n3);
            break;
            case 2:
            printf("%d ", n1);
            break;
            case 0:
            printf("%d ", n2);
            break;
        }
    }
    return 0;
}