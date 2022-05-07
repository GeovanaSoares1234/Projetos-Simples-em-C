#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nome[11][10];
    char armazenandopesquisa[11];
    int i,res=0;

    for (i=0;i<5;i++)
    {
        printf("Insira um nome qualquer:");
        fgets(Nome[i],11,stdin);
    }

    printf("Insira o nome que deseja pesquisar");
    fgets(armazenandopesquisa,11, stdin);

    for(i=1;i<=5;i++)
    {
        //comando strcmp
        if(strcmp(armazenandopesquisa,Nome[i])==0)
        {
         printf("\n Nome esta na posicao: %d de Nome %s",i,Nome[i]);
         system("pause");
         res = 1;
         break;
        }
    }
    if (res==0)
    {
        printf("Não foi encontrado este nome");
    }
    return 0;
}
