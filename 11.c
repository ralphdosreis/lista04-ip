#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int frequencias[101] = {0};
  int numero, i;

  for (i = 0; i < n; i++)
  {
    scanf("%d", &numero);
    frequencias[numero]++;
  }

  int maior_frequencia = 0;
  int valor_mais_frequente = 0;

  for (i = 0; i <= 100; i++)
  {
    if (frequencias[i] > maior_frequencia)
    {
      maior_frequencia = frequencias[i];
      valor_mais_frequente = i;
    }
    else if (frequencias[i] == maior_frequencia && i < valor_mais_frequente)
    {
      valor_mais_frequente = i;
    }
  }

  printf("%d\n", valor_mais_frequente);
  printf("%d\n", maior_frequencia);

  return 0;
}