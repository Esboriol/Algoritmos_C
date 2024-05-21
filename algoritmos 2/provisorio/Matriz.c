#include <stdio.h>

int main()
{
    int numeros[3] [3] = {
        {12, 29, 55}, // 0 linha
        {25, 32, 68}, // 1 linha
        {37, 198, 259} // 2 linha
    };
   
    for (int i = 0; i < 3; i++)
    {
        printf("Linha: %d \n", i);

        for (int a = 0; a < 3; a++)
        {
            printf("valores: %d \n", numeros[i] [a]);
        }
          
    }
    

    return 0;
}
