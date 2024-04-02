
#include <stdio.h>

int main()
{
    printf("---Cauculo nota do aluno---");

    // declaração de variáveis
    int prova1 = 0;
    int prova2 = 0;

    printf("\n Digite a nota da prova1");
    scanf("%d", &prova1);

    printf("\n Digite a nota da prova2");
    scanf("%d", &prova2);

    float soma = prova1 + prova2;
    float media = soma / 2;   

    printf("\n A media e: %.1f", media);

    return 0;
}
