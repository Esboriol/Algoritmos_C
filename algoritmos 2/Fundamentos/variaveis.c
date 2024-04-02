/*
Exemplo de algoritmo com declaração de variaveis de C
*/

#include <stdio.h>

int main(){
    int idade = 16;

    /*
    int é utilizado para numeros inteiros
    (int é o tipo / idade é o nome / numero é o valor)
    */

    float altura = 1.85;

    /*
    float é utilizado para numeros quebrados
    */

    char *letra = "O";

    /*
    char* para uma letra
    */

    char nome[] = "Otavio";

    /*
    char[] para palavras
    */
   printf("---Meus dados pessoais--");
   printf("\n Meu nome: %s", nome);
   printf("\n Minha idade: %d", idade);
   printf("\n Minha altura: %f", altura);

   /*
   %s = char
   */

  /*
  %d = int
  */

    /*
    %f = float
    */    

    return 0;
}