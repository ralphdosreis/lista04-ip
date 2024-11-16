#include <stdio.h>

int maiorQueK(int n, int vetor[], int k)
{
  int i, cont = 0;
  for (i = 0; i < n; i++)
  {
    if (vetor[i] >= k)
    {
      cont++;
    }
  }
  return cont;
}

int main()
{
  int n;
  do
  {
    scanf("%d", &n);
  } while (n < 1 || n > 1000);

  int i, vetor[n], k, resp;
  for (i = 0; i < n; i++)
  {
    scanf("%d ", &vetor[i]);
  }
  scanf("%d", &k);
  resp = maiorQueK(n, vetor, k);
  printf("%d\n", resp);
  return 0;
}