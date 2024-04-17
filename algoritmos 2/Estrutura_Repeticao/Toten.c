#include <stdio.h>

int pares=0;
int escolha=0;
int sorvete=0;
int Sabor_ca=0;
float Chocolate=2.50;
float Doce_de_leite=2.50;
float misto=2.50;
int Sabor_mix=0;
float Ovomaltine=16.90;
float Brownie=16.90;
float Valor_cas=0;
float Valor_Mix=0;
int parar=0;
float pepsi=10;
float coca_cola=10;
float guarana=10;
float sprit=10;
int sabor_be=0;
float Valor_Be=0;
int sabor_Lan=0;
float Valor_Lan=0;
float Whoper=27.90;
float Big=25.90;
float Galinha=23.90;
float Queijo=29.90;
int Sabor_Bata=0;
float Valor_bata=0;
float Frita=11.34;
float Cheddar=31.40;
int sim=0;
float Cupom=0;
float Valor_Total=0;
float Valor_Real=0;
float Valor_Cupom=0;

int main()
{
    do
    {
    
    printf("Qual produto voce deseja comprar: \n");
    printf("Sorverte 1, Bebida 2, Lanche 3, Batata 4: ");
    scanf("%d", &escolha);

        if (escolha == 1)
        {
        printf("O que voce deseja: \n");
        printf("Casquinha 1, Mix 2: ");
        scanf("%d", &sorvete);

            if (sorvete == 1)
            {
            printf("Qual sabor voce deseja: \n");
            printf("Chocolate 1, Doce de leite 2, Mista 3: ");
            scanf("%d", &Sabor_ca);

                if (Sabor_ca == 1)
                {
                Valor_cas=Chocolate;

              } else if (Sabor_ca==2){
                Valor_cas=Doce_de_leite;

              } else if(Sabor_ca == 3){
                Valor_cas=misto;
              } else if (Sabor_ca >= 4){
                printf("ops nao temos essa opção");

            } else if (Sabor_ca == 0)
            {
                printf("ops nao temos essa opcao");
            }
            
            }else if (sorvete == 2)
         {
            printf("Qual Sabor voce deseja: \n");
            printf("Ovomaltine 1, Brownie 2: ");
            scanf("%d", &Sabor_mix);

            if (Sabor_mix == 1)
            {
                Valor_Mix=Ovomaltine;
            }else if (Sabor_mix == 2)
            {
                Valor_Mix=Brownie;
            } else if (Sabor_mix ==0)
            {
                printf("Ops nao temos essa opcao");
            } else if (Sabor_mix >=3)
            {
                printf("Ops nao temos essa opcao");
            }
            
            
            
        } else if (sorvete >= 3)
        {
            printf("ops nao temos essa opcao");
        } else if (sorvete == 0)
        {
            printf("Ops nao temos essa opcao");
        }
        

        } else if (escolha ==2 )
        {
            printf("O que voce deseja: ");
            printf("Pepsi 1, Coca cola 2, Guarana 3, Sprit 4: ");
            scanf("%d", &sabor_be);
            if (sabor_be == 1)
            {
                Valor_Be = pepsi;
            } else if (sabor_be == 2)
            {
                Valor_Be = coca_cola;
            } else if (sabor_be == 3)
            {
                Valor_Be = guarana;
            } else if (sabor_be == 4)
            {
                Valor_Be = sprit;
            } else if (sabor_be > 4)
            {
                printf ("Ops nao temos essa opcao");
            } else if (sabor_be == 0)
            {
                printf("Ops nao temos essa opcao");
            }
            
            
        } else if (escolha ==3)
        {
            printf("Qual lanche voce deseja:");
            printf("Whopper 1, Cheddar 2, Big King 3, Chicken 4: ");
            scanf("%d", &sabor_Lan);

            if (sabor_Lan == 1)
            {
                Valor_Lan = Whoper;
            } else if (sabor_Lan == 2)
            {
                Valor_Lan = Queijo;
            } else if (sabor_Lan == 3)
            {
                Valor_Lan = Big;
            } else if (sabor_Lan == 4)
            {
                Valor_Lan = Galinha;
            } else if (sabor_Lan >=5)
            {
                printf("ops nao temos essa opcao");
            } else if (sabor_Lan ==0)
            {
                printf ("ops nao temos essa opcao");
            }
            
            
            
        } else if (escolha == 4)
        {
            printf("Qual batata voce deseja:");
            printf("Batata frita 1, Batata Cheddar 2: ");
            scanf("%d", &Sabor_Bata);

            if (Sabor_Bata ==1)
            {
                Valor_bata = Frita;
            }else if (Sabor_Bata ==2)
            {
                Valor_bata = Cheddar;
            } else if (Sabor_Bata >=3)
            {
                printf("Ops nao temos essa opcao");
            } else if (Sabor_Bata ==0)
            {
                printf("ops nao temos essa opcao");
            }
            
            
            
            
        }
        
        
        
        
        
        
        
        
    printf ("voce deseja selecionar outro item? \n");
    printf("Se sim digite 0 se nao digite 1: ");
    scanf("%d", &parar);
    } while (parar == 0);

    printf("Voce tem um cupom? \n");
    printf("Se sim digite 0 se nao digite 1: ");
    scanf("%d", &sim);

    if (sim == 0)
    {
        printf("Digite o valor de desconto do cupom: ");
        scanf("%f", &Cupom);

        Valor_Total = (Valor_bata+Valor_Be) + (Valor_cas+Valor_Mix) + Valor_Lan;

        Valor_Cupom = (Valor_Total / 100) * Cupom;

        Valor_Real = Valor_Total - Valor_Cupom;

        printf("O preco total da conta sera %.2f", Valor_Real);

    } else if (sim == 1)
    {
        Valor_Total = (Valor_bata+Valor_Be) + (Valor_cas+Valor_Mix) + Valor_Lan;

        printf("O preco total da conta sera %.2f", Valor_Total);
    }
    
    return 0;

}