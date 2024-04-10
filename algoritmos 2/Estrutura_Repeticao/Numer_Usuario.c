#include <stdio.h>

int main()
{
    int prego = 0;

    printf("Qual numero vc deseja ser imprimido ate 0? ");
    scanf("%d", &prego);

    for (int zaza = 0; zaza <= prego; prego--)
    {
        printf("Numero: %d \n", prego);
    }
    
    return 0;
}
