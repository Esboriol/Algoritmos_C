#include <stdio.h>

int main()
{
    
    float nota1 = 0;
    float nota2 = 0;
    int turista = 0;

    printf("\n Qual foi a sua primeira nota? ");
    scanf("%f", &nota1);
    printf("\n Qual foi a sua segunda nota? ");
    scanf("%f", &nota2);
    printf("\n Quantas faltas voce teve? ");
    scanf("%d", &turista);

    float media = nota1 + nota2;
    float RELAALLALALA = media / 2;

    if (RELAALLALALA >= 6 && turista <= 4)
    {
        printf("\n Voce passou de ano :D");
    } else 
    {
        printf("\n Voce repetiu de ano");
    }
    
    

    return 0;
}
