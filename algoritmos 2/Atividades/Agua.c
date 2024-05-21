#include <stdio.h>

int main()
{
    int pessoas = 0;
    float total_valor = 0;
    float total_agua = 0;

    printf("Ola sou um calculador de consumo de agua\n");
    printf("Primeiro fale quantas pessoas tem na sua casa: ");
    scanf("%d", &pessoas);

    int idade [pessoas];
    int tempo [pessoas];
    int aaaaaaaaaaaaaaaaaaaaaaaaaa [pessoas];
    float valor [pessoas];
    float agua [pessoas];

    for (int i = 0; i < pessoas; i++)
    {
    printf("Agora digite a idade da %d pessoa: ", i+1);
    scanf("%d", &idade [i]);

    printf("Quanto tempo voce demora para tomar banho: ");
    scanf("%d", &tempo [i]);

    printf("Quantas vezes voce toma banho no dia: ");
    scanf("%d", &aaaaaaaaaaaaaaaaaaaaaaaaaa [i]);
    }

    for (int i = 0; i < pessoas; i++)
    {
    
    if (idade [i]<= 10)
    {
        float n_sei = tempo[i] / 3;
        agua[i] = 18 * n_sei;
        valor[i] = agua[i] * 0.60;
        valor[i] = valor[i] * aaaaaaaaaaaaaaaaaaaaaaaaaa [1];

    } else if (idade [i] > 10 && idade [i] < 19)
    {
        float algo = tempo[i] / 5;
        agua[i] = 30 * algo;
        valor[i] = agua[i] * 0.60;
        valor[i] = valor[i] * aaaaaaaaaaaaaaaaaaaaaaaaaa [1];

    } else if (idade [i] > 18 && idade [i] < 26)
    {
        float n_sei = tempo[i] / 7;
        agua[i] = 42 * n_sei;
        valor[i] = agua[i] * 0.60;
        valor[i] = valor[i] * aaaaaaaaaaaaaaaaaaaaaaaaaa [1];

    } else if (idade [i] > 25)
    {
        float n_sei = tempo[i] / 4;
        agua [i] = 24 * n_sei;
        valor [i] = agua [i] * 0.60;
        valor[i] = valor[i] * aaaaaaaaaaaaaaaaaaaaaaaaaa [1];

    }
    }
    for (int i = 0; i < pessoas; i++)
    {
        total_agua = total_agua + agua[i];
    }
    
    for (int i = 0; i < pessoas; i++)
    {
        total_valor = total_valor + valor[i];
    }
    

    printf("Agora iremos calcular o total de consumo e do gasto \n");
    printf("O total de litros gasto foi de %.2f\n", total_agua);
    printf("E o valor total sera R$%.2f", total_valor);

    return 0;
}
