#include <stdio.h>

int encontrarN(int vetor[], int m, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (vetor[i] == m)
    {
      return 1;
    }
  }
  return 2;
}

int main()
{
  int n;
  scanf("%d", &n);
  int i, vetor[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }
  int resp, m;
  scanf("%d", &m);
  int encontrar;
  for (i = 0; i < m; i++)
  {
    scanf("%d", &encontrar);
    resp = encontrarN(vetor, encontrar, n);
    if (resp == 1)
    {
      printf("ACHEI\n");
    }
    else
    {
      printf("NAO ACHEI\n");
    }
  }

  return 0;
}