#include <stdio.h>

int main()
{
    float nota [2];
    float trabalho [3];
    int falta;

    for (int i = 0; i < 2; i++)
    {
        printf("Qual foi a nota da %d prova: ", i+1);
        scanf("%f", &nota[i]);
    }
    
    for (int d = 0; d < 3; d++)
    {
        printf("Qual foi a nota do %d trabalho: ", d+1);
        scanf("%f", &trabalho[d]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%f %f \n", nota[i], trabalho[i]);
    }
    
    
    printf("Quantas vezes voce faltou: ");
    scanf("%d", &falta);

    if (falta >= 3)
    {
        printf("Voce repetiu de ano por falta");

        return 0;
    }
    

    float valor_nota = (trabalho [0] + trabalho [1] + trabalho [2]) * 0.15;
    float nota_um = nota[0] * 0.25;
    float nota_dois = nota[1] * 0.30;

    float nota_final = (nota_um + nota_dois + valor_nota);

    if (nota_final >= 6)
    {
        printf("Parabens voce passou de ano com %.2f", nota_final);
    } else if (nota_final < 6)
    {
        printf("Voce repetiu de ano com a nota %.2f", nota_final);
    }
    
    

    return 0;
}
