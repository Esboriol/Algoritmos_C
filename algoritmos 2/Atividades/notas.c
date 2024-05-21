#include <stdio.h>

int main()
{
    float notas [3];

    for (int i = 0; i < 3; i++)
    {
        printf("Qual foi a sua nota: ");
        scanf("%f", &notas[i]);
    }
    
    float media = notas [0] + notas [1] + notas [2];
    float total = media/3;

    printf("A soma das provas são %f", media);

    if (total < 7)
    {
        printf("Voce reprovou de ano");
    } else if (total >= 7)
    {
        printf ("Paraben por passar de ano");
    }
    
    

    return 0;
}
