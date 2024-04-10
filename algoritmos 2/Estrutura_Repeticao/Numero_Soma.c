#include <stdio.h>

int main()
{

    int pere = 0;
    for (int nure = 1; nure <= 100; nure++)
    {
        int soma =pere+nure;
        if (nure <= 100)
        {
         pere = pere + nure;
        } 
        
    }
    
    printf("A soma sera : %d \n", pere);

    return 0;
}
