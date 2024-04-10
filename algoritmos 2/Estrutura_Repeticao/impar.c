#include <stdio.h>

int main()
{
    for (int pareles = 100; pareles >= 0; pareles--)
    {
        if (pareles %2 != 0)
        {
            printf("Numero Impar: %d \n", pareles);
        }
        
    }
    
    return 0;
}
