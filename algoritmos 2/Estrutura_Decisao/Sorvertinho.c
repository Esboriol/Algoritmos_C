#include <stdio.h>

int main()
{
    float dinheiro = 0;
    float dia = 0;

    printf("\n Voce tem dinheiro para ir para a sorverteria?(1 para sim / 2 para nao) ");
    scanf("%f", &dinheiro);
    printf("\n Esta chovendo?(1 para sim / 2 para nao)");
    scanf("%f", &dia);

    if (dia == 2 && dinheiro == 1)
    {
     printf("\n Esta um otimo dia para tomar sorvete");
    
    } else if (dinheiro == 2)
    {
        printf("\n Voce nao tem dinheiro para tomar sorvete");
    } else if (dia == 1)
    {
        printf("\n Esta um pessimo dia para tomar sorvete");
    }

    return 0;
}
