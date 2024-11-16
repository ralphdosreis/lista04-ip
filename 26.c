#include <stdio.h>

int main()
{

  int numeros_sorteados[6];

  int i, j, k, n;

  int w, r;

  int quadra = 0, sena = 0, quina = 0;

  for (i = 0; i < 6; i++)
  {
    scanf("%d", &numeros_sorteados[i]);
  }

  scanf("%d", &n);

  for (j = 0; j < n; j++)
  {

    int jogo[6];

    int numeros_certos = 0;

    for (k = 0; k < 6; k++)
    {
      scanf("%d", &jogo[k]);
    }

    for (w = 0; w < 6; w++)
    {
      for (r = 0; r < 6; r++)
      {
        if (numeros_sorteados[w] == jogo[r])
        {
          numeros_certos++;
          break;
        }
      }
    }

    if (numeros_certos == 6)
    {
      sena++;
    }
    else if (numeros_certos == 5)
    {
      quina++;
    }
    else if (numeros_certos == 4)
    {
      quadra++;
    }
  }

  if (sena == 0)
  {
    printf("Nao houve acertador para sena\n");
  }
  else
  {
    printf("Houve %d acertador(es) da sena\n", sena);
  }

  if (quina == 0)
  {
    printf("Nao houve acertador para quina\n");
  }
  else
  {
    printf("Houve %d acertador(es) da quina\n", quina);
  }

  if (quadra == 0)
  {
    printf("Nao houve acertador para quadra\n");
  }
  else
  {
    printf("Houve %d acertador(es) da quadra\n", quadra);
  }

  return 0;
}