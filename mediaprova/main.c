#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d, media;
    printf("\n\t\t\tCalculo de Medias\n\n");
    printf("\n\tDigite a nota da prova 1:");
    scanf("%f%*c",&a);
    printf("\n\tDigite a nota da prova 2:");
    scanf("%f%*c",&b);
    printf("\n\tDigite a nota da prova 3:");
    scanf("%f%*c",&c);
    printf("\n\tDigite a nota da prova 4:");
    scanf("%f%*c",&d);
    media = (a+b+c+d)/4;

    if (media>=7){
        printf("Aprovado com media= %.2f",media);
    }
    else{
        printf("Reprovado com media= %.2f",media);
    }
    return 0;
}
