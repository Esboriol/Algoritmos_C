#include <stdio.h>

int idade (int atual, int pessoa) {
    int verdade = atual - pessoa;
    return verdade;
}

int main()
{
    int nascimento;
    int atual;

    printf("Ola sou um calculador de idade");
    printf("\nDigite a sua data de nascimento: ");
    scanf("%d", &nascimento);

    printf("Que ano voce esta: ");
    scanf("%d", &atual);

    int aninho = idade (atual, nascimento);

    printf("Voce tem %d anos", aninho);

    return 0;
}
