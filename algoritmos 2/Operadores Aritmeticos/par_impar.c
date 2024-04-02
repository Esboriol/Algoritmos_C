#include <stdio.h>

int main()
{
    int numer = 0;

    printf("Qual e o seu numero: ");
    scanf("%d", &numer);

    int verdade = numer % 2;

    if (verdade == 0)
    {
        printf("Par");
    }else
    {
        printf("Impar");
    }
    
    
    
    return 0;
}
