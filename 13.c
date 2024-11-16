#include <stdio.h>
#include <stdlib.h>
#define TAM 500

char *funcao(int N, char *string)
{

  char *msg = (char *)malloc((N + 1));
  if (msg == NULL)
  {
    return NULL;
  }

  int i;
  for (i = 0; i < N; i++)
  {
    msg[i] = string[i];
  }
  msg[N] = '\0';

  return msg;
}

int main()
{
  int n, i;

  scanf("%d", &n);
  getchar();

  for (i = 0; i < n; i++)
  {
    int N;
    char string[TAM];

    scanf("%d ", &N);
    fgets(string, sizeof(string), stdin);

    char *msg = funcao(N, string);

    if (msg != NULL)
    {

      printf("%s\n", msg);

      free(msg);
    }
    else
    {

      printf("Erro ao alocar memória para o prefixo.\n");
    }
  }

  return 0;
}