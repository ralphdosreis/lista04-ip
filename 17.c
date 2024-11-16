#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 5100

int conta_aliteracoes(char *linha)
{
  int contador = 0;
  int aliteracao_continua = 0;
  char primeira_letra_anterior = '\0';

  int i = 0;
  while (linha[i] != '\0')
  {

    while (linha[i] == ' ')
      i++;

    if (linha[i] != '\0')
    {

      char primeira_letra_atual = tolower(linha[i]);

      if (primeira_letra_atual == primeira_letra_anterior)
      {

        if (!aliteracao_continua)
        {
          contador++;
          aliteracao_continua = 1;
        }
      }
      else
      {

        aliteracao_continua = 0;
      }

      primeira_letra_anterior = primeira_letra_atual;

      while (linha[i] != ' ' && linha[i] != '\0')
        i++;
    }
  }

  return contador;
}

int main()
{
  char string[tam];
  while (fgets(string, sizeof(string), stdin) != NULL)
  {
    int aliteracoes = conta_aliteracoes(string);
    printf("%d\n", aliteracoes);
  }

  return 0;
}