#include <stdio.h>

int metalgaming=0;

int funny=0;

int lalabe=0;

int main()
{
    printf("Ola qual numero voce deseja saber a tabuada: ");
    scanf("%d", &funny);

    while (metalgaming<=10)
    {
        lalabe= metalgaming*funny;
        printf("%d X %d = %d \n", metalgaming, funny, lalabe);
        metalgaming++;
    }
    

    return 0;
}
