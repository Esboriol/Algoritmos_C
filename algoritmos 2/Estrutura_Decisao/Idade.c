#include <stdio.h>

int main()
{
    float idade = 0;

    printf("\n Ola quantos anos voce tem? ");
    scanf("%f", &idade);

    if (idade >= 18)
    {
        printf("\n Voce e maior de idade");
    } else {
        printf("\n Voce nao e maior de idade");
    }
    

    return 0;
}
