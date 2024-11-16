#include <stdio.h>

void bubbleSort(int arr[], int n)
{
  int i;
  int j;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printUniqueElements(int arr[], int n)
{

  printf("%d\n", arr[0]);
  int i;
  for (i = 1; i < n; i++)
  {

    if (arr[i] != arr[i - 1])
    {
      printf("%d\n", arr[i]);
    }
  }
}

int main()
{
  int N;
  scanf("%d", &N);

  int arr[N];
  int primeiro = 1;
  int i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  bubbleSort(arr, N);
  printUniqueElements(arr, N);

  return 0;
}