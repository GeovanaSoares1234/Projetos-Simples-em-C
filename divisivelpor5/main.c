#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Insira o numero que deseja:\t");
    scanf("%d",&numero);

    if(numero%5==0){
        printf("o Numero e dividido por 5\t",numero);
    }
    else{
        printf("Nao e divisivel");
    }


    return 0;
}
