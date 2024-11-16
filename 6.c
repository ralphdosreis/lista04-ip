#include <stdio.h>

int main()
{
  int n, i, j;
  scanf("%d", &n);

  char input[1000];
  char um[] = "one";
  char dois[] = "two";
  char tres[] = "three";

  int count1, count2, count3;

  for (i = 0; i <= n; i++)
  {
    fgets(input, sizeof(input), stdin);
    count1 = 0;
    count2 = 0;
    count3 = 0;

    for (j = 0; input[j] != '\n'; j++)
    {
      if (input[j] == um[j])
      {
        count1++;
      }

      if (input[j] == dois[j])
      {
        count2++;
      }

      if (input[j] == tres[j])
      {
        count3++;
      }
    }

    if (count1 > count2 && count1 > count3 && count1 >= (sizeof(um) - 2))
    {
      printf("1\n");
    }
    else if (count2 > count3 && count2 > count1 && count2 >= (sizeof(dois) - 2))
    {
      printf("2\n");
    }
    else if (count3 > count1 && count3 > count2 && count3 >= (sizeof(tres) - 2))
    {
      printf("3\n");
    }
  }

  return 0;
}