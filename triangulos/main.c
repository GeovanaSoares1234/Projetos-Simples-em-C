#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    int soma=0;
    printf("Digite o angulo a:");
    scanf("%f",&a);
    printf("Digite o angulo b:");
    scanf("%f",&b);
    printf("Digite o angulo c:");
    scanf("%f",&c);

    soma = a+b+c;
    if((soma == 180)&&(a>0)&&(b>0)&&(c>0)){
        if((a==90)||(b==90)||(c==90)){
            printf("triangulo retangulo");

        }
        if(((a>90)&&(b<90)&&(c<90))||((a<90)&&(b>90))&&(c<90)||(c>90)&&(b<90)&&(a<90)){
            printf("Triangulo obtusangulo");
        }
        if((a<90)&&(b<90)&&(c<90)){
            printf("Triangulo acutangulo");
        }

    }
    else{
        printf("nao sao angulos validos");
    }


    return 0;
}
