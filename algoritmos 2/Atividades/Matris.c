#include <stdio.h>

int main()
{
    int numero [3] [3];

    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 3; a++)
        {
            printf("Qual e o %d numero que vc escolhe da %d coluna: ", a +1, i +1);
            scanf("%d", &numero [i] [a]);
        }
        
    }

    int soma =0;

    for (int d = 0; d < 3; d++)
    {
        for (int p = 0; p < 3; p++)
        {
            soma += numero[d] [p];
        }

     printf("A soma da %d coluna sera %d \n", d, soma);
        
    }

    return 0;
}
