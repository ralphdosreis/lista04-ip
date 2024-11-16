#include <stdio.h>

int main()
{
  int x, presentes;

  scanf("%d %d", &x, &presentes);

  int numero_alunos[x];

  int contador = 0;

  int i, j, k;

  for (i = 0; i < x; i++)
  {

    scanf("%d", &numero_alunos[i]);
    if (numero_alunos[i] <= 0)
    {
      contador++;
    }
  }

  if (contador < presentes)
  {
    printf("SIM\n");
  }
  else
  {
    printf("NAO\n");

    for (k = x - 1; k >= 0; k--)
    {
      if (numero_alunos[k] <= 0)
      {
        printf("%d\n", k + 1);
      }
    }
  }

  return 0;
}