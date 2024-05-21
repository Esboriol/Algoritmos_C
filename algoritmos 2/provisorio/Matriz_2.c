#include <stdio.h>
#include <locale.h>

int main()
{
    int numelos [3] [2];

    // Coletando os numero //

    for (int linha = 0; linha < 3; linha++)
    {
        printf("Iremos prencher a linha %d \n", linha+1);

        for (int coluna = 0; coluna < 2; coluna++)
        {
            printf("Qual numero voce escolhe? ");
            scanf("%d", &numelos[linha] [coluna]);
        }
        
    }
    
    // Imprimindo os numeros //

    for (int i = 0; i < 3; i++)
    {
        printf("Estamos na linha: %d \n", i +1);

        for (int a = 0; a < 2; a++)
        {
            printf("%d ", numelos[i] [a]);
        }
        printf("\n");    

    }
    

    return 0;
}
