#include <stdio.h>

int numeruz=0;

int bala=0;

int main()
{
    while (numeruz<1001)
    {
        bala=numeruz+bala;

        numeruz++;
    }
    
    printf("A soma sera: %d \n", bala);
    return 0;
}
