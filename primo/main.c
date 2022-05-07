#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,cont,resul=0;
    printf("\n\tDigite um numero: ");
    scanf("%d", &numero);

    for(cont=2;cont<=numero/2;cont++){
        if(numero%cont==0){
            resul++;
        }
    }
    if(resul==0){
        printf("\nPRIMO\n");
    }else{
        printf("\nNAO PRIMO\n");
    }
    return 0;
}
