#include <stdio.h>
#include <string.h>

int main()
{
  char string[10000], temp;
  int n, i, j, count, aux;

  scanf("%d", &n);
  getchar();

  for (i = 0; i < n; i++)
  {
    fgets(string, sizeof(string), stdin);

    // Passada 1
    count = 0;
    for (j = 0; string[j] != '\n'; j++)
    {
      if (string[j] >= 'A' && string[j] <= 'Z' || string[j] >= 'a' && string[j] <= 'z')
      {
        string[j] = string[j] + 3;
      }
      count++;
    }

    // Passada 2
    for (j = 0; j < count / 2; j++)
    {
      temp = string[j];
      string[j] = string[count - j - 1];
      string[count - j - 1] = temp;
    }

    // Passada 3
    aux = count / 2;

    for (j = aux; j < count; j++)
    {
      string[j] = string[j] - 1;
    }

    printf("%s", string);
  }

  return 0;
}