#include <stdio.h>
#include <stdlib.h>

char cliente[10][20];
float saldo[10];
int conta [10];
char resp;
int i,j,xconta,achou;
float dep,saq;
void cadastro()
{
    resp='s';

    while(resp == 'S' || resp =='s')
    {
        i++;
        conta[i]=conta[i]+(500+i);
        printf("\n --------------------------------------------");
        printf("\n Conta Corrente estabelecida via Sistema Nr %d",conta[i]);
        printf("\n ---------------------------------------------");

        printf("\n Informe o nome do Cliente");
        fgets(cliente[i],20,stdin);
        fflush(stdin);

        printf("\n Informe o Saldo do Cliente");
        scanf("%f",&saldo[i]);
        fflush(stdin);

        printf("\n Pretende continuar o Cadastro [S]im ou [N]ão");
        resp = getchar();
        fflush(stdin);

    }
}

void deposito()
{
    printf("\n Informe a conta a ser depositada");
    scanf("%d",&xconta);

    achou =0;
    for(j=1;j<=i;j++)
    {
        if(xconta == conta[j])
        {

            printf("\n Informe o Valor a ser depositado");
            achou =1;
            scanf("%f",&dep);

            printf("\n --------------------------------");
            printf("\n Cliente %s Saldo Atual da Conta %2.f",cliente[j],saldo[j]);
            saldo[j]+=dep;
            printf("\n Saldo atualizado %2.f",saldo[j]);
            printf("\n --------------------------------");
            printf("\n\n");
            system("pause");
        }
    }

    if(achou ==0)
    {
        printf("\n  Conta não encontrada... tente novamente");
        printf("\n\n");
        system("pause");
    }
}


void saque()
{
    printf("\n Informe a conta a ser Saqueada");
    scanf("%d",&xconta);

    achou =0;
    for(j=1;j<=i;j++)
    {
        if(xconta == conta[j])
        {
           printf("\n Informe o Valor a ser Retirado da conta");
            achou =1;

            scanf("%f",&saq);

            if(saq > saldo[j])
            {
                printf("\n Saldo Insuficiente...");
                printf("\n\n");
                system("pause");
            }else {

            printf("\n --------------------------------");
            printf("\n Cliente %s Saldo Atual da Conta %2.f",cliente[j],saldo[j]);
            saldo[j]= saldo[j] - saq;
            printf("\n Saldo atualizado %2.f",saldo[j]);
            printf("\n --------------------------------");
            printf("\n\n");
            system("pause");
        }
    }
    }
    if(achou ==0)
    {
        printf("\n  Conta não encontrada... tente novamente");
        printf("\n\n");
        system("pause");
    }
}


void relatorio()
{
    if (i==0)
    {
        printf("\n Base de Dados Vazia.. favor fazer preenchimento");
        system("pause");
    }else {

    for(j=1;j<=i;j++)
    {
        printf("\n -------------------------");
        printf("\n Nr. Conta......%d",conta[j]);
        printf("\n Cliente %s",cliente[j]);
        printf("\n Saldo...%.2f",saldo[j]);
        printf("\n --------------------------");
    }

    system("pause");

   }
}

void consulta()
{
   if (i==0)
    {
        printf("\n Base de Dados Vazia.. favor fazer preenchimento");
        system("pause");
    }else {

    printf("\n Informe a conta a ser Consultada");
    scanf("%d",&xconta);
    achou=0;
    j=1;
    while (achou == 0  && j <= i)
    {
        if(xconta == conta[j])
        {
        printf("\n --------------------------");
        printf("\n Nr. Conta......%d",conta[j]);
        printf("\n Cliente..... %s",cliente[j]);
        printf("\n Saldo...%......2f",saldo[j]);
        printf("\n --------------------------");
        achou =1;
        system("pause");
        break;

       }else{
        j++;
       }
    }

    if (achou == 0)
    {
        printf("\n Conta não existe em nossa Base de Dados");
        system("pause");
    }
   }
}




main()
{
    i=0;
    int op;

    do
    {
        system("cls");
        printf("\n [1] - Cadastro de Contas..");
        printf("\n [2] - Deposito de Valores.");
        printf("\n [3] - Saques em Valores...");
        printf("\n [4] - Relatório Saldos Geral de Cliente ....");
        printf("\n [5] - Consulta Individual");

        printf("\n Informe a Opção");
        scanf("%d", &op);
        fflush(stdin);

        switch(op)
        {
        case 1:
            cadastro();
            break;
        case 2:
            deposito();
            break;
        case 3:
            saque();
            break;
        case 4:
            relatorio();
            break;
        case 5:
            consulta();
            break;
        default :
            printf("\n Opção invalida...tente novamente");
            system("system");

        }

    }
    while(op != 6);
}
