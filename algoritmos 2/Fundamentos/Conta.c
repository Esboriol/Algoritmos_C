#include <stdio.h>

int main()
{
    float dinheiros = 0;
    float parceiras = 0;

    printf("\n Ola, sou um calculador de parcelas.");
    printf("\n Qual e o valor do produto? ");
    scanf("%f", &dinheiros);

    printf("\n Voce ira parcelar em quantas vezes? ");
    scanf("%f", &parceiras);

    float Valores = dinheiros / parceiras;

    printf("\n O preso por cara parcela sera %.2f", Valores);
    printf("\n E voce tera que pagar a parcela por %.0f meses", parceiras);

    return 0;
}
