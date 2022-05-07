#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    float areatotal;

    printf("Digite o valor da Base do triangulo\n");
    scanf("%f",&base);

    printf("Digite o valor da altura do triangulo\n");
    scanf("%f",&altura);

    areatotal = (base*altura)/2;
    printf("A area é:%f\n",areatotal);

    return 0;
}
