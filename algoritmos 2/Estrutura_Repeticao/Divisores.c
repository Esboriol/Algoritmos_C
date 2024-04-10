#include <stdio.h>

int main()
{
    int numer = 0;
    printf("Qual e o seu numero? ");
    scanf("%d", &numer);

    for (int i = numer; i > 0; i--)
    {
        if (numer %i ==0)
        {
            printf("O seu divisor e %d\n", i);
        }
        
    }
    
    return 0;
}
