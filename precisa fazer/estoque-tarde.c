#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Vetores de Entrada

char  nome[10][20];
int   codigo[10];
float valor[10];
int   quant[10];

// Vetores de Relatorio

char rproduto[10][20];
char cliente[10][20];
float rvalor[10];
int rquant[10];
float total[10];


int i,n,xcodigo,achou,xquant,k;

k=0;

void Cadastro()
{

    printf("\n Informe a quantidade de produtos em estoque");
    scanf("%d",&n);
    fflush(stdin);

    for(i=1; i<=n; i++)
    {
        codigo[i]=i;

        printf("\n Informe o nome do Produto");
        fgets(nome[i],20,stdin);

        printf("\n Informe a quantidade do Produto");
        scanf("%d",&quant[i]);
        fflush(stdin);

        printf("\n Informe o valor do Produto");
        scanf("%f",&valor[i]);
        fflush(stdin);

    }
}

void Relprod()
{
    for(i=1; i<=n; i++)
    {
        printf("\n Nome   : %s",nome[i]);
        printf("\n Codigo : %d",codigo[i]);
        printf("\n Valor  : %.2f",valor[i]);
        printf("\n Quantidade %d",quant[i]);
        printf("\n\n");
    }

    system("pause");
}

void Venda()
{
    printf("\n Informe o Produto a ser Pesquisado");
    scanf("%d",&xcodigo);
    printf("\n Informe a quantidade Desejada");
    scanf("%d",&xquant);
    achou =0;

    for(i=1; i<=n; i++)
    {
        if(xcodigo == codigo[i] && xquant <= quant[i])
        {
            printf("\n ---------------------------------------");
            printf("\n Produto %s Quantidade %d",nome[i],quant[i]);
            printf("\n ---------------------------------------");
            achou =1;
            k++;
            quant[i]= quant[i] - xquant;
            printf("\n Baixa efetuada com sucesso...");
            total[k]= valor[i] *xquant;
            strcpy(rproduto[k],nome[i]);
            rquant[k]=xquant;
            rvalor[k]=valor[i];
            printf("\n Transferencia de dados com sucesso");
            printf("\n Informe o nome do Cliente");
            scanf("%s",cliente[k]);
            system("pause");

        }

    }

    if(achou == 0)
    {
        printf("\n Produto não existe ou quantidade em falta");
        system("pause");
    }

}


int main()
{
    int op;
    do
    {
        system("cls");
        printf("\n --------------------------------------");
        printf("\n --- Sistema de Controle de Estoque ---");
        printf("\n --------------------------------------");
        printf("\n [1] - Cadastro de Produtos");
        printf("\n [2] - Venda & baixa em Estoque");
        printf("\n [3] - Relatório dos Produtos em Estoque");
        printf("\n [4] - Relatório de Vendas Efetuadas");

        printf("\n Escolha a Opção ");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            Cadastro();
            break;
        case 2:
            Venda();
            break;
        case 3:
            Relprod();
            break;
        default:
            printf("\n Opção Invalida.. tente novamente");
            system("pause");

        }

    }
    while(op!=4);



}







