#include <stdio.h>

int main()
{
    int numero = 0;
    int palha = 0;
    printf("Qual numero voce deseja saber a tabuada? ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
    
        palha = numero * i;

        printf("%d \n", palha);   
    }

    return 0;
}
