#include <stdio.h>

float desconto=0;
float preco=0;
int produto=0;
float valor_total=0;
float valor=0;
float dois_em_um=0;

int main()
{
    printf("Sera 1 ou 2 produtos: ");
    scanf("%d", &produto);

    if (produto==1)
    {
        printf("Qual e o preco do produto: ");
        scanf("%f", &preco);
        if (preco<=100)
        {
            desconto=(preco / 100) * 5;

            valor_total= preco - desconto;
            printf("O valor final sera %2.f", valor_total);
            
        } else if (preco>100)
        {
            desconto=(preco / 100) * 8;

            valor_total= preco - desconto;
            printf("O valor final sera %2.f", valor_total);
        }
        
        
    } else if (produto==2)
     {
        printf("Qual e o valor do primeiro produto: ");
        scanf("%f", &preco);

        printf("Qual e o valor do segundo produto: ");
        scanf("%f", &valor);

        dois_em_um=preco+valor;

        if (dois_em_um<=100)
        {
            desconto=(dois_em_um / 100) *5;
            valor_total= dois_em_um - desconto;

            printf("O valor final sera %f", valor_total);
        } else if (dois_em_um>100)
        {
            desconto=(dois_em_um / 100) *8;
            valor_total= dois_em_um - desconto;

            printf("O valor final sera %f", valor_total);
        }
        
        
     }
    
    

    return 0;
}
