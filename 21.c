#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHABET_SIZE 26

void countFrequencies(char text[], int frequencies[])
{
  int i = 0;

  for (i = 0; text[i] != '\0'; i++)
  {
    char c = tolower(text[i]);

    if (c >= 'a' && c <= 'z')
    {
      frequencies[c - 'a']++;
    }
  }
}

void findMaxFrequencies(int frequencies[], char result[])
{

  int maxFreq = 0;
  int i, index = 0;

  for (i = 0; i < ALPHABET_SIZE; i++)
  {
    if (frequencies[i] > maxFreq)
    {
      maxFreq = frequencies[i];
    }
  }

  for (i = 0; i < ALPHABET_SIZE; i++)
  {
    if (frequencies[i] == maxFreq)
    {
      result[index++] = 'a' + i;
    }
  }
  result[index] = '\0';
}

int main()
{
  int N;
  scanf("%d", &N);
  getchar();

  char text[201];
  char result[ALPHABET_SIZE + 1];
  int t;
  for (t = 0; t < N; t++)
  {
    fgets(text, sizeof(text), stdin);

    int frequencies[ALPHABET_SIZE] = {0};

    countFrequencies(text, frequencies);

    findMaxFrequencies(frequencies, result);

    printf("%s\n", result);
  }

  return 0;
}