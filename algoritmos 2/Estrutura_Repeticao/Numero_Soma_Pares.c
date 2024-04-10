#include <stdio.h>

int main()
{
    int seila = 0;
    int escolha = 0;
    printf("Qual numero vc deseja somar? ");
    scanf("%d", &escolha);

    for (int i = escolha ; i > 0; i--)
    {
        if (i %2 ==0)
        {
            seila = seila + i;
        }  

    }
     printf("A soma sera: %d \n", seila);
    
    return 0;
}
