#include <stdio.h>
#include <math.h>

void bubbleSort(double arr[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        double temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{

  int mid1, mid, mid2;

  double median;
  int i, j, num;

  scanf("%d", &num);

  double arr[num];

  int n = sizeof(arr) / sizeof(arr[0]);

  for (i = 0; i < num; i++)
  {

    scanf("%lf", &arr[i]);
  }

  bubbleSort(arr, n);

  if (num % 2 != 0)
  {
    mid = num / 2;
    median = arr[mid];
  }
  else
  {
    mid1 = num / 2 - 1;
    mid2 = num / 2;
    median = (arr[mid1] + arr[mid2]) / 2.0;
  }

  printf("%.2lf\n", median);

  return 0;
}