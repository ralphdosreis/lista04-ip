#include <stdio.h>

int main()
{
  int n, binario[32], i, j;
  while (scanf("%d", &n) != EOF)
  {
    int i = 0;
    if (n == 0)
    {
      printf("0");
    }
    else
    {
      while (n > 0)
      {
        binario[i] = n % 2;
        n /= 2;
        i++;
      }
      for (j = i - 1; j >= 0; j--)
      {
        printf("%d", binario[j]);
      }
    }
    printf("\n");
  }
  return 0;
}