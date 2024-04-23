#include <stdio.h>

int main()
{
    float noas[3];

    for (int i=0; i<3; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &noas[i]);
    }
    
   for (int z=0; z<3; z++)
   {
    printf("A nota e %2.f \n", noas[z]);
   }
   

    return 0;
}
