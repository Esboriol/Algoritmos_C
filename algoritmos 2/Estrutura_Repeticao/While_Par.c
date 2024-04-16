#include <stdio.h>

int dada=0;

int dede=0;

int main () {
while (dede<=50)
{
    if (dede % 2 ==0)
    {
        dada=dede+dada;
    }
    dede++;
}
    printf("A soma sera: %d", dada);
}