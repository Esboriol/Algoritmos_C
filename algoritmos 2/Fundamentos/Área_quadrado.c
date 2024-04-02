#include <stdio.h>

int main()
{
    char quadrades[] = "Quadrado";

    char circurus[] = "Circulo";

    float circulo = 1;

    float quadrado = 1;

    printf("\n Qual é o valor do lado do quadrado? ");
    scanf("%f", &quadrado);

    float Area = quadrado * 2;

    printf("\n A area do quadrado e: %.2f", Area);

    return 0;
}
