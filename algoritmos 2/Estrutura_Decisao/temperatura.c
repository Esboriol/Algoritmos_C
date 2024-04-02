#include <stdio.h>

int main()
{
    int tem = 0;

    printf("Como esta a temperatura: ");
    scanf("%d", &tem);

    if (tem < 14)
    {
        printf("Fica frio ai kk");
    }
    else if (tem > 13 && tem < 26)
    {
        printf("Mo paz");
    }
    else if (tem > 25 && tem < 33)
    {
        printf("Ta paia em");
    }
    else if (tem > 32)
    {
        printf("AAAAAAAAAAAAAAAAAAAA");
    }

    return 0;
}
