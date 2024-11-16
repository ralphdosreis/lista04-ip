#include <stdio.h>
#include <stdbool.h>

#define MAX_ELEMS 100

bool existeNoConjunto(int conjunto[], int tamanho, int elemento)
{
  int i;
  for (i = 0; i < tamanho; i++)
  {
    if (conjunto[i] == elemento)
    {
      return true;
    }
  }
  return false;
}

void imprimirConjunto(int conjunto[], int tamanho)
{
  printf("(");
  int i;
  for (i = 0; i < tamanho; i++)
  {
    printf("%d", conjunto[i]);
    if (i < tamanho - 1)
    {
      printf(",");
    }
  }
  printf(")\n");
}

void subtracaoConjuntos(int A[], int TA, int B[], int TB)
{
  printf("(");
  bool primeiro = true;
  int i;
  for (i = 0; i < TA; i++)
  {
    if (!existeNoConjunto(B, TB, A[i]))
    {
      if (!primeiro)
      {
        printf(",");
      }
      printf("%d", A[i]);
      primeiro = false;
    }
  }
  printf(")\n");
}

void produtoCartesiano(int A[], int TA, int B[], int TB)
{
  printf("(");
  bool primeiro = true;
  int i;
  int j;
  for (i = 0; i < TA; i++)
  {
    for (j = 0; j < TB; j++)
    {
      if (!primeiro)
      {
        printf(",");
      }
      printf("(%dx%d)", A[i], B[j]);
      primeiro = false;
    }
  }
  printf(")\n");
}

int main()
{
  int TA, TB;
  int A[MAX_ELEMS], B[MAX_ELEMS];

  do
  {
    scanf("%d", &TA);
  } while (TA < 1 || TA > MAX_ELEMS);

  do
  {
    scanf("%d", &TB);
  } while (TB < 1 || TB > MAX_ELEMS);

  int countA = 0;
  while (countA < TA)
  {
    int elemento;
    scanf("%d", &elemento);
    if (!existeNoConjunto(A, countA, elemento))
    {
      A[countA] = elemento;
      countA++;
    }
  }

  int countB = 0;
  while (countB < TB)
  {
    int elemento;
    scanf("%d", &elemento);
    if (!existeNoConjunto(B, countB, elemento))
    {
      B[countB] = elemento;
      countB++;
    }
  }

  imprimirConjunto(A, TA);

  imprimirConjunto(B, TB);

  subtracaoConjuntos(A, TA, B, TB);

  produtoCartesiano(A, TA, B, TB);

  return 0;
}