#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);
  getchar();
  int i, j;
  for (i = 0; i < n; i++)
  {
    int vogais = 0, letras = 0, consoantes = 0;
    char frase[10000];
    fgets(frase, sizeof(frase), stdin);
    for (j = 0; frase[j] != '\n'; j++)
    {
      if ((frase[j] >= 'A' && frase[j] <= 'Z') || (frase[j] >= 'a' && frase[j] <= 'z'))
      {
        letras++;
        if (strchr("AEIOUaeiou", frase[j]) != NULL)
        {
          vogais++;
        }
        else
        {
          consoantes++;
        }
      }
    }
    printf("Letras = %d\n", letras);
    printf("Vogais = %d\n", vogais);
    printf("Consoantes = %d\n", consoantes);
  }
  return 0;
}