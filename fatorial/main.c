#include <stdio.h>

int main()
{
    int fatorial;
    int resultado = 0;

    printf("Digite um numero para fatorar:\n");
    scanf("%i",&fatorial);

    for(;fatorial>=1;--fatorial){
        resultado*=fatorial;
    }
    printf("O fatorial é:%i\n", resultado);
    return 0;
}
