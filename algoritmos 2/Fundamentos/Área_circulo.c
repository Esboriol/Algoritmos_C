#include <stdio.h>

/*
    Para colocar o pi pode ser com o include
*/

#include <math.h>

/*
    Ou vc pode utiliza o pi com o defini
*/

#define PI 3.14159265359

int main()
{
    char circulus = "Circulo";

    float Ciriculus = 0;

   float Pi = M_PI;

    printf("\n Qual e o raio do circulo? ");
    scanf("%f", &Ciriculus);

    float Area = Ciriculus * Ciriculus * PI;

    printf("A area do circulo e: %f", Area);
    return 0;
}
