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

              } else if (Sabor_ca=2){
                Valor_cas=Doce_de_leite;

              } else if(Sabor_ca == 3){
                Valor_cas=misto;
              } else if (Sabor_ca >= 4){
                printf("ops nao temos essa opção");

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
            }
            
        
        } else if (sorvete >= 3)
        {
            printf("ops opcao errada");
        }
        } else if (escolha ==2 )
        {
            printf("O que voce deseja: ");
            printf("Pepsi 1, Coca cola 2, Guarana 3, Sprit 4: ");
            scanf("%d", &sabor_be);
            if (sabor_be == 1)
            {
                Valor_Be == pepsi;
            } else if (sabor_be == 2)
            {
                Valor_Be == coca_cola;
            } else if (sabor_be == 3)
            {
                Valor_Be == guarana;
            } else if (sabor_be == 4)
            {
                Valor_Be == sprit;
            } else if (sabor_be >= 4)
            {
                printf ("Ops nao temos essa opcao");
            }
            
            
            
            
            
        
        }
        
        
        
        
        
        
    printf ("voce deseja selecionar outro item? \n");
    printf("Se sim digite 0 se nao digite 1: ");
    scanf("%d", &parar);
    } while (parar == 0);
    
    return 0;

}
