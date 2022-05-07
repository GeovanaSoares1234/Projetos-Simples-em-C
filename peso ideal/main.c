#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sexo;
    float altura;
    float resul=0;

    printf("Insira seu sexo:\t");
    scanf("%d",&sexo);
    printf("Insira sua altura:\t");
    scanf("%f",&altura);

    if(sexo == 1){
        resul = ((62.1 * altura)-44.7);
        printf("\tO seu peso ideial e: %f\t",resul);
    }
    if(sexo ==2){
        resul=((72.2*altura)-58);
        printf("\tO seu peso ideial e: %f\t",resul);
    }
    return 0;

}
