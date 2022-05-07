#include <stdio.h>
#include <locale.h>

int main()
{setlocale(LC_ALL,"Portuguese_Brazil");
   char nome[50];
   char end[100];
   int cep;
   double tel;

   printf("Insira as informacoes abaixo:\n");
   printf("Insira seu nome: ");
   gets(nome);

   printf("Insira seu Endereco: \n");
   gets(end);

   printf("Insira seu cep: \n");
   scanf("%d",&cep);

   printf("Insira seu Telefone: \n");
   scanf("%lf",&tel);

   printf("Exibição dos dados digitados:\n");
   printf("Nome:%s\nEndereço:%s\nCep:%i\nTelefone:%f",nome,end,cep,tel);

    return 0;
}
