#include <stdio.h>

 int area (int lado, int base)
    {
        int nsei = lado * base;
        return nsei;
    }

    float zuzs(float raio)
    {
        float circu = 3.14 * (raio * raio);
        return circu;
    }

int main()
{
    int lado;
    int base;
    float raio;
    int ba;
    
    printf("Ola sou um calculador de area de quadrado e circulo\n");
    printf("Voce deseja calcular a area do quadrado (digite 1) ou do circulo (digite 2)");
    scanf("%d", &ba);

    if (ba == 1)
    {
    printf("Digite a area do lado do quadrado: ");
    scanf("%d", &lado);

    base = lado;

    int nsei = area(lado, base);

    printf("A area do quadrado sera %d", nsei);
    } else if (ba == 2)
    {
        printf("Qual e o raio do circulo: ");
        scanf("%f", &raio);

        float circu = zuzs(raio);

        printf("A area do circulo sera %f", circu);
    } 

    if (ba < 1 && ba > 2)
    {
        printf("para de ser burro pls");
    }
    
    
    return 0;
}
