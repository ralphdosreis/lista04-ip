#include <stdio.h>
#include <string.h>

int calculaOperacoes(char *A, char *B)
{
  int i, operacoes = 0;
  int tamanho = strlen(A);

  for (i = 0; i < tamanho; i++)
  {
    int diff = (B[i] - A[i] + 26) % 26;
    operacoes += diff;
  }

  return operacoes;
}

int main()
{
  int T, i;
  scanf("%d", &T);
  getchar();

  for (i = 0; i < T; i++)
  {
    char A[10001], B[10001];
    scanf("%s %s", A, B);

    int resultado = calculaOperacoes(A, B);
    printf("%d\n", resultado);
  }

  return 0;
}