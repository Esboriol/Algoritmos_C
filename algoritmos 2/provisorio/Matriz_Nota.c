#include <stdio.h>

int main()
{
    float notas [3] [5] = {
        {4.5, 7, 9, 10, 6},
        {8, 1, 7.5, 2, 9.5},
        {8.5, 2.5, 1, 8.5, 3}

    };

    for (int linha = 0; linha < 3; linha++)
    {
        printf("Esta na linha: %d \n", linha);

        for (int coluna = 0; coluna < 3; coluna++)
        {
            printf("O valor sera: %.1f \n", notas[linha] [coluna]);
        }
        
    }
    

    return 0;
}
