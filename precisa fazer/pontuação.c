#include <stdio.h>
#include <stdlib.h>


int main()
{
  int ponto,i,j,n,f,soma;
  float media, maior;
  media =0;
  maior =0;
  f=0;

  printf("\n Informe a quantidade de funcion�rios");
  scanf("%d",&n);


  for(i=1;i<=n;i++)
  {
    soma =0;
    media =0;
  for(j=1;j<=3;j++)
  {

  printf("\n Informe a pontua��o do Funcion�rio %d",i);
  scanf("%d",&ponto);

  soma+=ponto;

  }
     if (soma > maior)
     {
       maior = soma;
       f=i;

     }
    media = soma/3;
    printf("\n A soma Total do Funcion�rio %d teve Total de %d",i,soma);
    printf("\n A media Obtida do Funcion�rio %.2f", media);
    printf("\n\n");
    system("pause");

  }

  printf("\n A maior Pontua��o encontrado entre os funcion�rios foi %.2f", maior);

}
