#include <stdio.h>
#include <string.h>

#define TAM 50000

void printEspelho(int n1, int n2)
{
  char crescente[TAM] = "";
  char numero[12];
  int i;

  for (i = n1; i <= n2; i++)
  {
    sprintf(numero, "%d", i);
    strcat(crescente, numero);
  }

  printf("%s", crescente);

  int tamanho = strlen(crescente);
  for (i = tamanho - 1; i >= 0; i--)
  {
    putchar(crescente[i]);
  }

  printf("\n");
}

int main()
{
  int n;
  int i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printEspelho(n1, n2);
  }

  return 0;
}