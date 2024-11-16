#include <stdio.h>
#include <string.h>

int contaLeds(char *numero)
{
  int i = 0, leds = 0;
  while (numero[i] != '\0')
  {
    switch (numero[i])
    {
    case '0':
      leds += 6;
      break;
    case '1':
      leds += 2;
      break;
    case '2':
      leds += 5;
      break;
    case '3':
      leds += 5;
      break;
    case '4':
      leds += 4;
      break;
    case '5':
      leds += 5;
      break;
    case '6':
      leds += 6;
      break;
    case '7':
      leds += 3;
      break;
    case '8':
      leds += 7;
      break;
    case '9':
      leds += 6;
      break;
    }
    i++;
  }
  return leds;
}

int main()
{
  int n;
  scanf("%d", &n);
  if (n < 1 || n > 1000)
  {
    return 1;
  }
  char numero[102];
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%s", numero);
    int leds = contaLeds(numero);
    printf("%d leds\n", leds);
  }
  return 0;
}