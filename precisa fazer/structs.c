#include <stdio.h>
#include <stdlib.h>
/* Struct trabalha com vários dados de tipos diferentes, conhecidos como membros struct */

// Declaração //

/* 
  struct <nome>
  {
    <lista dos tipos e seus membros(campos)>
  }
  struct <nome> <variavel>

  */

void Exemplo1_Struct();
void Exemplo2_Struct();

int main()
{
  int op;

  printf("\n Bem vindo ao Aprendizado de Structs\n");

  printf("\n---------------------------------");
  printf("\n [1] Exemplo1_Struct");
  printf("\n [2] Exemplo2_Struct");
  printf("\n---------------------------------");

  printf("\nEscolha uma opcao para executar: ");
  scanf("%d", &op);
  fflush(stdin);

  switch (op)
  {
  case 1:
    Exemplo1_Struct();
    break;
  case 2:
    Exemplo2_Struct();
    break;
  }

  return 0;
}

void Exemplo1_Struct()
{

  struct cadastro_Alunos
  {
    char nomes[20];
    float n1, n2, n3, n4;
  };
  struct cadastro_Alunos fatec;

  float media;

  printf("\nCadastro de Alunos\n");
  printf("\nInforme o nome do aluno: ");
  fgets(fatec.nomes, 20, stdin);
  fflush(stdin);

  printf("\nInforme a nota 1: ");
  scanf("%f", &fatec.n1);
  printf("\nInforme a nota 2: ");
  scanf("%f", &fatec.n2);
  printf("\nInforme a nota 3: ");
  scanf("%f", &fatec.n3);
  printf("\nInforme a nota 4: ");
  scanf("%f", &fatec.n4);

  media = (fatec.n1 + fatec.n2 + fatec.n3 + fatec.n4) / 4;

  printf("\n Nome: %s", fatec.nomes);
  printf("\n Nota 1: %.2f", fatec.n1);
  printf("\n Nota 2: %.2f", fatec.n2);
  printf("\n Nota 3: %.2f", fatec.n3);
  printf("\n Nota 4: %.2f\n", fatec.n4);
  printf("\n Media: %.1f\n", media);
}

void Exemplo2_Struct()
{
  struct cadastro_Alunos
  {
    char nomes[20];
    float notas[4]
  };
  struct cadastro_Alunos fatec[6];

  float media, soma_notas;

  for (int i = 0; i < 6; i++)
  {

    printf("\nDigite o nome %d: ", i + 1);
    fgets(fatec[i].nomes, 20, stdin);
    fflush(stdin);
    for (int j = 0; j < 4; j++)
    {
      printf("\n Digite a nota %d: ", i + 1);
      scanf("%f", &fatec[i].notas[j]);
      fflush(stdin);
    }
  }

  /* SAIDA DE DADOS */

  for (int i = 0; i < 6; i++)
  {
    media = 0;
    soma_notas = 0;
    printf("\n Nome do aluno: %s", fatec[i].nomes);
    for (int j = 0; j < 4; j++)
    {
      printf("\n Nota %.2f", fatec[i].notas[j]);
      soma_notas += fatec[i].notas[j];
    }
    media = soma_notas / 4;
    printf("\n Media do Aluno %.2f\n", media);
  }
}
