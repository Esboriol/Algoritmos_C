
#include <stdio.h>

int main(){
    char bairro[] = "Sao Francisco";
    char cidade[] = "Piracicaba";
    char logradouro[] = "R.Uchoa";
    int numero = 470;
    int CEP = 13423470;
    char Estado[] = "SP";

    printf("---Endereço---");
    printf("\n Logradouro: %s", logradouro);
    printf("\n Meu bairro: %s", bairro);
    printf("\n Cidade: %s", cidade);
    printf("\n Estado: %s", Estado);
    printf("\n Cep: %d", CEP);
    printf("\n Numero: %d", numero);

    return 0;
}
