#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1 = 0;
    float nota2 = 0;

    printf("\n Ola sou um calculador de media");
    printf("\n Qual foi a sua primeira nota? ");
    scanf("%f", &nota1);

    printf("\n Qual foi a sua sengunda nota? ");
    scanf("%f", &nota2);

    float Reultado = nota1 + nota2; 
    float REAL = Reultado / 2;

    if (REAL >= 6)
    {
        printf("\n Voce passou de ano parabens");
    } else 
    {
        printf("\n Vai estuda seu burro do caralho");
    }
    
    

    return 0;
}
