#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[10][20];
    char mnome[20];
    char nnome[20];
    int idade [10];
    int i,maior,k,menor,soma;
    k=0;
    soma=0;
    maior =0;
    menor =100;
    for(i=1; i<=10; i++)
    {
        printf("\n Digite o nome %d",i);
        fgets(nome[i],20,stdin);
        fflush(stdin);

        printf("\n Informe a idade");
        scanf("%d",&idade[i]);
        fflush(stdin);

        if(idade[i]> maior)
        {
            maior=idade[i];
            strcpy(mnome,nome[i]);
        }

        if(idade[i] < menor)
        {
            menor=idade[i];
            strcpy(nnome,nome[i]);
        }
        if(idade[i]%2 != 0)
        {
            k++;
        }
        else
        {
            soma=soma+idade[i];
        }

    }

    printf("\n Nome da Pessoa de maior Idade %s %d",mnome,maior);
    printf("\n Nome da Pessoa de menor Idade %s %d",nnome,menor);
    printf("\n Quantidade de pessoas com idade impar %d",k);
    printf("\n A soma da pessoas com idade Par %d",soma);



}
