#include <stdio.h>
#define true 1

int main()
{
  int n, i, j, maior, count;
  int vetor[10000];

  while (true)
  {
    // Leitura do tamanho do vetor
    scanf("%d", &n);

    // Condição de parada
    if (n == 0)
    {
      return 0;
    }

    // Leitura do vetor e descoberta do maior valor
    maior = 0;
    for (i = 0; i < n; i++)
    {
      scanf("%d", &vetor[i]);

      if (maior <= vetor[i])
      {
        maior = vetor[i];
      }
    }

    // Printagem do problema
    for (i = 0; i <= maior; i++)
    {
      count = 0;

      for (j = 0; j < n; j++)
      {
        if (vetor[j] <= i)
        {
          count++;
        }
      }

      printf("(%d) %d\n", i, count);
    }
  }

  return 0;
}