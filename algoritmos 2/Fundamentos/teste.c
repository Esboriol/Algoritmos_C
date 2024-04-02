#include <stdio.h>

int main()
{
    char nome[] = "a";
    char sobrenome[] = "a";

    printf("\n Qual e o seu nome?");
    scanf("%s", &nome);
    
    printf("\n Qual e o seu sobrenome?");
    scanf("%s", &sobrenome);

    char nome_completo[] = nome sobrenome; 

    printf("\n mais que nome legal ", nome);

    return 0;
}
