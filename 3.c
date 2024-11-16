#include <stdio.h>

int paresN(int n, int vetor[])
{
  int i, cont = 0;
  for (i = 0; i < n; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      printf("%d ", vetor[i]);
      cont++;
    }
  }
  return cont;
}

int main()
{
  int n;
  scanf("%d", &n);
  int i, vetor[n], resp;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }
  resp = paresN(n, vetor);
  printf("%d", resp);
  return 0;
}