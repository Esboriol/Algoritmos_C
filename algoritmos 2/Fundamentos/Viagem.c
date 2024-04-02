#include <stdio.h>

#include <stdbool.h>

int main()
{
    float litroVei = 0;

    float distancia = 0;

    bool Etanol;
    
    printf("\n Qual e o total de quilometros da viagem: ");
    scanf("%f", &distancia);

    printf("\n Qual e a media de quilometros por litro do veiculo: ");
    scanf("%f", &litroVei);

    float Valor = distancia / litroVei;

    printf("\n A gasolina utilizada e etanol? (1 para sim e 0 para nao): ");
    scanf("%f", &Etanol);
    

    if (Etanol = true) {
        printf("\n Espere um momento");
        float ValorE = Valor * 3.42;
        printf("\n O valor sera: %.2f", ValorE);

    } else {
        printf("\n Espere um momento");
        float ValorG = Valor * 5.58;
        printf("\n O valor sera %.2f", ValorG);

    }

    return 0;
}