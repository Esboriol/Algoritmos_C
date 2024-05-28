#include <stdio.h>

float pixixs (float total)
{
    float puxus = total * 0.10;
    float paraba = total - puxus;
    return paraba;
}

float balelus (float total)
{
    float bobos = total * 0.05;
    float bebe = total = bobos;
    return bebe;
}

float cartao (float total)
{
    float pobreHAHAHAHAHAHHAHA = total * 0.02;
    float pbre2 = total - pobreHAHAHAHAHAHHAHA;
    return pbre2;
}

int main()
{
    float valor [4] = {
        56.60, 17.90, 5.29, 10.00
    };
    
    int ba;
    int esco;

    printf("Ola somos uma loja virtual");
    printf("\nQuantos produtos voce deseja comprar: ");
    scanf("%d", &ba);

    float compras [ba];

    for (int i = 0; i < ba; i++)
    {
        printf("Escolha uma das opcoes abaixo:\n");
        printf("Strogonoff (digite 1) -- R$56,60 \n X burguer (digite 2)-- R$ 17,90 \n Batata frita (digite 3)-- R$5,79 \n Bebida -- (digite 4)R$10\n  ");
        scanf("%d", &esco);
        if (esco >=1 && esco <=4)
        {
        compras [i] = valor [esco -1];
        } else {
         printf("Se mata =)");
         return 0;
        }
    }
    float total =0;

    for (int i = 0; i < ba; i++)
    {
     total = compras [i] + total;
    }
    
    int forma;
    int aa;
    
    printf("Qual vai ser a forma de pagamento: ");
    printf("\nPix digite 1 \nboleto digite 2 \ncartao digite 3\n");
    scanf("%d", &forma);

    if (forma == 1)
    {
        float pupux = pixixs (total);
        printf("O perco total sera de R$%.2f", pupux);
    } else if (forma == 2)
    {
        float bobos = balelus (total);
        printf("O peco total sera de R$%.2f", bobos);
    } else if ( forma == 3)
    {
        printf("Quantas vezes vc vai parcelar: ");
        scanf("%d", &aa);

        if (aa <=3)
        {
        
        float pobreHHAHAHHAHAHAHHAHA = cartao (total);
        printf("O peco total sera de R$%.2f", pobreHHAHAHHAHAHAHHAHA);
        
        } else {
            printf("O preco total sera de R$%.2f", total);
        }
    }
    
    return 0;
}