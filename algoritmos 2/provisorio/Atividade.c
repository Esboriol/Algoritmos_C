#include <stdio.h>

// atividade 1 //
int nu[10];
float div =0;
float soma =0;
int menor = 0;
int maior = 0;

int main()
{
    
for (int i = 0; i < 10; i++)
{
    printf("Qual numero vc escolhe na %d posicao: ");
    scanf("%d", nu[i]);
}

// atividade 2 //
float soma = 0;

for (int a = 0; a < 10; a++)
{
    soma = soma + nu[a];
}

printf("A soma total sera: %f \n", soma);

// atividade 3 //
div = soma / 10;

printf("A media sera: %f \n", div);

// atividade 4 //
menor = nu[1];

for (int ç = 0; ç < 10; ç++)
{
    if (menor > nu[ç])
    {
        menor = nu[ç];
    }
    
}

printf("O menor numero e: %d \n", menor);

for (int c = 0; c < 10; c++)
{
    if (maior < nu[c])
    {
       maior = nu[c];
    }
    
}

printf("O maior numero sera: %d \n", maior);

// atividade 5 //
int es = 0;

printf("Qual numero voce escolhe: ");
scanf("%d", &es);

for (int q = 0; q < 10; q++)
{
    if (es == nu[q])
    {
        printf("O numero %d ja foi escolhido", es);
    } else {
        printf("O numero %d nao foi escolhido", es);
    }
    
}

// atividade 6 //

for (int t = 9; t >= 0; i--)
{
    printf("O %d vetor e: %d", t, nu[t]);
}

// atividade 7 //
int ordem[10] = 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0;

for (int v = 0; v < 10; v++)
{
    if (ordem[v] > nu[v])
    {
        ordem[v] = nu[v];
    } 
    
    if (ordem[0] > nu[v])
    {
        ordem[0] = nu[v];
    }
    
    if (ordem[1] > nu[v] && nu[v] != ordem[0])
    {
        ordem[1] = nu[v];
    }
    
    if (ordem[2] > nu[v] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[2] = nu[v];
    }

      if (ordem[3] > nu[v] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[1])
    {
        ordem[3] = nu[v];
    }

      if (ordem[4] > nu[v] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[4] = nu[v];
    }

      if (ordem[5] > nu[v] && nu[v] != ordem[4] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[5] = nu[v];
    }

      if (ordem[6] > nu[v] && nu[v] != ordem[5] && nu[v] != ordem[4] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[6] = nu[v];
    }

    if (ordem[7] > nu[v] && nu[v] != ordem[6] && nu[v] != ordem[5] && nu[v] != ordem[4] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[7] = nu[v];
    }

    if (ordem[8] > nu[v] && nu[v] != ordem[7] && nu[v] != ordem[6] && nu[v] != ordem[5] && nu[v] != ordem[4] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[8] = nu[v];
    }
     
    if (ordem[9] > nu[v] && nu[v] != ordem[8] && nu[v] != ordem[7] && nu[v] != ordem[6] && nu[v] != ordem[5] && nu[v] != ordem[4] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[9] = nu[v];
    }
      if (ordem[10] > nu[v] && nu[v] != ordem[9] && nu[v] != ordem[8] && nu[v] != ordem[7] && nu[v] != ordem[6] && nu[v] != ordem[5] && nu[v] != ordem[4] && nu[v] != ordem[4] && nu[v] != ordem[3] && nu[v] != ordem[2] && nu[v] != ordem[1] && nu[v] != ordem[0])
    {
        ordem[6] = nu[v];
    }

    for (int k = 0; k < 10; i++)
    {
        printf("%d \n", ordem[k]);
    }
    

}


return 0;
}