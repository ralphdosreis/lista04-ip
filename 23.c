#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char string[50];

  int i;

  while (fgets(string, sizeof(string), stdin) != NULL)
  {
    int posicao = 0;

    for (i = 0; i < strlen(string); i++)
    {
      if (string[i] != ' ')
      {
        if (posicao % 2 == 0)
        {
          string[i] = toupper(string[i]);
        }
        else
        {
          string[i] = tolower(string[i]);
        }
        posicao++;
      }
    }
    printf("%s", string);
  }

  return 0;
}