#include <stdio.h>
#include <string.h>

#define N 256

void str_clean(char str[], char clr[])
{

  int toRemove[256] = {0};
  int i;

  for (i = 0; clr[i] != '\0'; i++)
  {
    toRemove[(unsigned char)clr[i]] = 1;
  }

  int j = 0;

  for (i = 0; str[i] != '\0'; i++)
  {
    if (!toRemove[(unsigned char)str[i]])
    {
      str[j] = str[i];
      j++;
    }
  }

  str[j] = '\0';
}

int main()
{
  char str[N];
  char clr[N];

  scanf("%[^\n]%*c", str);
  scanf("%[^\n]%*c", clr);

  str_clean(str, clr);

  printf("%s\n", str);

  return 0;
}