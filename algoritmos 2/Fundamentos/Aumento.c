#include <stdio.h>

int main()
{
    float Salario = 0;

    float Aumento = 0;

    printf("\n Qual e o seu salario: ");
    scanf("%f", &Salario);

    printf("\n Qual foi o almento recebido: ");
    scanf("%f", &Aumento);

    float porcentagem = Salario / 100;
    
    float NovoAumento = porcentagem * Aumento;

    float Salario_novo = Salario + NovoAumento;

    printf("\n O seu novo salario e: %.2f", Salario_novo);

    return 0;
}
