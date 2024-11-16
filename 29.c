#include <stdio.h>

void ordenar(int vetor[], int tamanho)
{
  int v, w, temp;
  for (v = 0; v < tamanho - 1; v++)
  {

    for (w = 0; w < tamanho - v - 1; w++)
    {

      if (vetor[w] > vetor[w + 1])
      {

        temp = vetor[w];
        vetor[w] = vetor[w + 1];
        vetor[w + 1] = temp;
      }
    }
  }
}

int main()
{

  int i, j, k, a, b;

  scanf("%d %d", &a, &b);

  int vetor[a + b];

  for (i = 0; i < (a + b); i++)
  {

    scanf("%d", &vetor[i]);
  }

  int tamanho = sizeof(vetor) / sizeof(vetor[0]);

  ordenar(vetor, tamanho);

  for (j = 0; j < tamanho; j++)
  {
    printf("%d\n", vetor[j]);
  }

  return 0;
}