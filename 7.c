#include <stdio.h>
#define true 1

int main()
{
  int n1, n2, nt, i;
  char string[10000];
  while (true)
  {
    scanf("%d %d", &n1, &n2);
    nt = n1 + n2;
    if (n1 == 0 && n2 == 0)
    {
      return 0;
    }
    sprintf(string, "%d", nt);
    for (i = 0; string[i]; i++)
    {
      if (string[i] != '0')
      {
        printf("%c", string[i]);
      }
    }
    printf("\n");
  }
  return 0;
}