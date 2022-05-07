#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    float media, altura, soma,maior;
    char  sexo, sx;
    int n,i,qth,qtf;

    qtf =0;
    qth =0;
    maior =0;


    printf("\n Informe a quantidade de pessoas a ser lidas");
    scanf("%d",&n);
    fflush(stdin);


    for(i=1; i<=n; i++)
    {

        printf("\n Informe a altura da Pessoa");
        scanf("%f",&altura);
         fflush(stdin);

        printf("\n Informe o sexo da Pessoa");
        scanf("%c",&sexo);
        sexo = toupper(sexo);
        fflush(stdin);

        while ( sexo != 'F' && sexo != 'M')
        {
            printf("\n Sexo Invalido.. tente novamente");
            scanf("%c",&sexo);
            sexo = toupper(sexo);
        }

        if(maior == 0)
        {
            maior = altura;
            sx = sexo;
        }
        else if(altura > maior)
        {
            maior =altura;
            sx = sexo;
        }

        if(sexo == 'F' )
        {

            qtf++;
            soma=soma+altura;
        }
        else
        {

            qth++;
        }



    }

    media = soma/qtf;
    printf("\n A Maior altura encontrad.a no Grupo é de %.2f", maior);
    printf("\n A Media das alturas das mulheres encontrada no grupo %.2f pertence ao sexo %c ", media,sx);
    printf("\n A quantidade de homens encontrada no grupo %d",qth);




}
