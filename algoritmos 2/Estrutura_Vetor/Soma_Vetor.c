#include <stdio.h>

int main()
{
    float som[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Qual e o numero: ");
        scanf("%f", &som[i]);
    }

    float tota = som[1] + som[1] + som[2] + som[3] + som[4];

    printf("O total sera %2.f", tota);

    return 0;
}
