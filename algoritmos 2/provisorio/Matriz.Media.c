#include <stdio.h>

int main()
{
    float notas [3] [2];

    for (int aluno = 0; aluno < 3; aluno++)
    {
        printf("Esolheremos as notas do %d aluno \n", aluno+1);

        for (int nota = 0; nota < 2; nota++)
        {
         printf("Qual foi a sua %d nota? ", nota+1);

         scanf("%f", &notas [aluno][nota]);

        }

    }
    
    for (int i = 0; i < 3; i++)
    {
        float media = notas [i][0] + notas[i][1];

        float baba = media/2;

        if (media <7)
        {
            printf("O aluno foi reprovado com a media %.1f", baba);
        } else if (media >=7)
        {
            printf("O aluno foi aprovado com a media %.1f", baba);
        }
        
        printf("\n");

        
    }
        
    return 0;
}
