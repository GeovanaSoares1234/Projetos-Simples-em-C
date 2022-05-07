#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


typedef struct dados
{
   int codigo;
   char nome[20];
   char sobrenome[15];
   char endereco[20];
   int rg;
   int telefone;
   float salario;

   }CLIENTE;

   void cadastro()
   {
     char resp;
     char numstr[15];
     resp=' ';

     FILE *fptr;

     CLIENTE fatec;

     fptr =fopen("texto","a");


     if(fptr == NULL)
     {
     printf("\n Problemas de Abertuta de Arquivo.....");
     system("pause");
     }else
     {

     do{

     system("cls");
     printf("\n -----------------------------------------------------");
     printf("\n *************** FATEC AMERICANA *********************");
     printf("\n ------------------  CADASTRO ------------------------");
     printf("\n -----------------------------------------------------");


     printf("\n Entre com o codigo..:");
     scanf("%d",&fatec.codigo);
     fflush(stdin);

     printf("\n Entre com o nome.....");
     gets(fatec.nome);
     fflush(stdin);

     printf("\n Entre com o Sobrenome...");
     gets(fatec.sobrenome);
     fflush(stdin);

     printf("\n Entre com o Endereço....");
     gets(fatec.endereco);
     fflush(stdin);

     printf("\n Entre com o RG..........");
     gets(numstr);
     fatec.rg = atoi(numstr);
     fflush(stdin);

     printf("\nEntre com o telefone..");
     gets(numstr);
     fatec.telefone=atoi(numstr);
     fflush(stdin);

     printf("\n Entre com o Salario...");
     gets(numstr);
     fatec.salario = atof(numstr);
      fflush(stdin);


      fwrite(&fatec,sizeof(CLIENTE),1,fptr);

      printf("\n Gravado os dados com sucesso");
      printf("\n\n");
      system("pause");

      printf("\n Deseja continuar o cadastramento [S]im ou [N]ao");

      resp=getchar();

      }while(resp =='S' || resp =='s');


     }
     fclose(fptr);

     }

   main()
   {

   int op;

   do{

      system("cls");
      printf("\n [1] - Cadastro de Registro");
      printf("\n [2] - Relatorio do Arquivo");
      printf("\n [3] - Pesquisa - NOme");
      printf("\n Escolha a opção ...");
      scanf("%d",&op);


      switch (op)
      {
      case 1:
        cadastro();
        break;
      case 2:
     printf("relatorio()");;
      break;
      case 3:
      printf("pesquisa()");
      break;
      default :
      printf("\n Opção Invalida ... tente novamente");
      system("pause");

      }


   }while(op!=4);

   }



//har op;while (1) {printf("\nDeseja realizar novo teste (s/n) ?");op = getche();if (op == 's' || op == 'n') {printf("\n\nVc escolheu '%c'", op);break;}}



