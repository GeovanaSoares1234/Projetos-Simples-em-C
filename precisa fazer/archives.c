
// Bibliotecas utilizadas //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Definindo uma struct na qual será armazenado todos os dados //
// typedef: varios tipos de dados     struct: estrutura de dados    "banco_Dados": nome escolhido para a struct, pode ser alterado //
typedef struct banco_Dados
{

  // Constantes utilizadas para armazenar todas as informações //
  char nome[50];
  char sobrenome[50];
  char endereco[50];
  int codigo;
  int RG;
  int telefone;
  float salario;

} ALUNO; // Alteração no nome da struct: de "banco_Dados" --> "ALUNO" //

void cadastro();  // Indicando que existe uma função com nome de "cadastro" //
void relatorio(); // Indicando que existe uma função com nome de "relatorio" //

int main()
{

  int op;

  // Inicio do programa. Menu de interação //

  do
  {
    printf("\n -------------------------------");
    printf("\n -----------BEM VINDO-----------");
    printf("\n -------------------------------");
    printf("\n [1]-Cadastro\n [2]-Relatorio de Cadastros");
    printf("\n\n O que deseja fazer? ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
      cadastro();
      break;
    case 2:
      relatorio();
      break;
    default:
      printf("\n Ops... Opcao invalida, tente novamente");
    }
  } while (op != 0);

  if (op == 0)
  {
    printf("\n Programa finalizado");
  }

  return 0;
}

void cadastro()
{

  // Inicio do cadastro //

  int op;
  char mask[50]; // Variavel utilizada para mascara de dados. Pode ser convertida para algum tipo especifico. //
  FILE *fptr;    // FILE: tipo do arquivo, ou seja, tipo FILE    *fptr: Criação de um ponteiro com nome "fptr" //
  ALUNO fatec;   // Adicionando um indice "fatec" para fazer relação com a struct "ALUNO" //
  fptr = fopen("Base de Dados", "ab");
  /*  
  fptr: chamando o ponteiro        fopen: abertura do arquivo ("nome ou diretório do arquivo", "tipo de ação") 
  Colocar o nome do arquivo, fará com que o arquivo seja criado no diretorio onde o programa está sendo executado
  // Tipos de ação: "ab = acrescentar" "rb = leitura" "wb = escrever"
  */
  if (fptr == NULL) // Se o "fptr" ou seja, ponteiro para nosso arquivo, for NULL, ou seja, não existente, ou não pode ser aberto //
  {
    printf("\n ESTE ARQUIVO NAO PODE SER ABERTO - CORROMPIDO OU NAO EXISTENTE - TENTE NOVAMENTE");
  }
  else
  {
    do
    {
      system("cls");
      printf("\n -------------------------------------");
      printf("\n -----------FATEC AMERICANA-----------");
      printf("\n --------------CADASTRO---------------");
      printf("\n -------------------------------------");

      // Entrada dos dados //

      printf("\n Digite o codigo do aluno: ");
      scanf("%d", &fatec.codigo); // Associação da struct "fatec". "constantes dentro dela" ou seja, chamo a "struct" . "qual constante armazenar" //
      fflush(stdin);

      printf("\n Digite o nome do aluno: ");
      gets(fatec.nome);
      fflush(stdin);

      printf("\n Digite o sobrenome do aluno: ");
      gets(fatec.sobrenome);
      fflush(stdin);

      printf("\n Digite o endereco do aluno: ");
      gets(fatec.endereco);
      fflush(stdin);

      printf("\n Digite o RG do aluno: ");
      gets(mask);            // Atribuindo o conteudo digitado numa variavel "mask" //
      fatec.RG = atoi(mask); // Com a função atoi, modifica o conteudo para inteiro e atribui numa constante da struct //
      fflush(stdin);

      printf("\n Digite o telefone do aluno: ");
      gets(mask);
      fatec.telefone = atoi(mask);
      fflush(stdin);

      printf("\n Digite o salario do aluno: ");
      gets(mask);
      fatec.salario = atof(mask); // Com a função atof, modifica o conteudo para float e atribui numa constante da struct //
      fflush(stdin);

      fwrite(&fatec, sizeof(ALUNO), 1, fptr);
      /* fwrite: "escrever o conteudo digitado para dentro do arquivo"
         &fatec: armazena esse conteudo no endereço da minha "struct" --> fatec: associação para struct "ALUNO"
         sizeof("nome da struct"): pega o total de todos os dados que foram armazenados
         ,1: fará a gravação de 1 em 1
         fptr: dentro do ponteiro, na qual será escrito dentro do arquivo
      */
      printf("\n -------------------------------");
      printf("\n ----- Gravado com Sucesso -----");
      printf("\n -------------------------------");

      printf("\n Deseja continuar o cadastro? [S] [N] ");
      op = getchar();                 // Armazendo em "op" a tecla digitada //
    } while (op == 's' || op == 'S'); // se for "S" ou "s", continue o cadastro //
  }
  fclose(fptr); // fclose(fptr): fecha o arquivo
}

void relatorio()
{
  int cab;
  FILE *fptr;
  ALUNO fatec;
  fptr = fopen("Base de Dados", "rb"); // Mudando o tipo de ação, de "ab": acrescentar para "rb": leitura

  if (fptr == NULL)
  {
    printf("\n ESTE ARQUIVO NAO PODE SER ABERTO - CORROMPIDO OU NAO EXISTENTE - TENTE NOVAMENTE");
  }
  else
  {
    system("cls");
    printf("\n -------------------------------------");
    printf("\n ----------FATEC AMERICANA------------");
    printf("\n -------------RELATORIO---------------");
    printf("\n -------------------------------------");
    while (fread(&fatec, sizeof(ALUNO), 1, fptr)) // Mudando de "fwrite": escrita para "fread": leitura
    {
      printf("\n Nome: %s", fatec.nome);
      printf("\n Sobrenome: %s", fatec.sobrenome);
      printf("\n Codigo: %d", fatec.codigo);
      printf("\n Endereco: %s", fatec.endereco);
      printf("\n Telefone: %d", fatec.telefone);
      printf("\n RG: %d", fatec.RG);
      printf("\n Salario: R$%.2f", fatec.salario);
      printf("\n\n");
    }
  }
  system("pause");
  system("cls");
  fclose(fptr);
}
