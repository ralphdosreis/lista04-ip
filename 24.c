#include <stdio.h>
#include <stdlib.h>

long int string2int(const char *str)
{

  long int num = atoi(str);

  return num;
}

int main()
{
  long int n;

  char string[127];

  while (scanf("%s", string) != EOF)
  {

    n = string2int(string);

    printf("%ld %ld\n", n, n * 2);
  }

  return 0;
}