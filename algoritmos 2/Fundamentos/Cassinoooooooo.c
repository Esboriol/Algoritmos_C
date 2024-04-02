#include <stdio.h>

int main()
{
    float Realis = 0;
    float Dolaris = 4.96;

   float sin_nan = 0;

    printf("\n Ola, sou um convertor de reais em dolares.");
    printf("\n Qual seria a valor em reais? ");
    scanf("%f", &Realis);

    printf("\n Voce sabe o valor do dolar(2 para sim/1 para nao)? ");
    scanf("%f", &sin_nan);

    if (sin_nan > 1)
    {
        printf("\n Digite o valor do dolar: ");
        scanf("%f", &Dolaris);

        float Valoris = Realis / Dolaris;
        printf("\n O valor em dolar sera %.2f", Valoris);
    } else if (sin_nan < 2)
    {
        float velores = Realis / Dolaris;
        printf("\n O valor em dolar sera %.2f", velores);
    }
    
    

    return 0;
}
