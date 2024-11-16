#include <stdio.h>
#include <stdlib.h>

double string2double(const char *str)
{

  char *ptr;

  double valor = strtod(str, &ptr);

  return valor;
}

int main()
{

  int i, j;

  char str[127];

  while (scanf("%s", str) != EOF)
  {

    double resultado = string2double(str);

    printf("%.3lf %.3lf\n", resultado, resultado * 2);
  }
  return 0;
}