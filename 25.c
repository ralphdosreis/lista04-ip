#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 2048
#define MAX_WORDS 1000

void cleanAndSplit(char *input, char words[MAX_WORDS][MAX_LEN], int *word_count)
{
  int i = 0, j = 0, word_idx = 0;

  while (input[i] != '\0')
  {

    if (isalpha(input[i]) || isalnum(input[i]))
    {
      words[word_idx][j++] = tolower(input[i]);
    }

    else if (j > 0)
    {
      words[word_idx][j] = '\0';
      word_idx++;
      j = 0;
    }
    i++;
  }

  if (j > 0)
  {
    words[word_idx][j] = '\0';
    word_idx++;
  }

  *word_count = word_idx;
}

void countFrequencies(char words[MAX_WORDS][MAX_LEN], int word_count)
{
  int frequencies[MAX_WORDS] = {0};
  int i, j;

  for (i = 0; i < word_count; i++)
  {
    if (frequencies[i] == 0)
    {
      for (j = i + 1; j < word_count; j++)
      {
        if (strcmp(words[i], words[j]) == 0)
        {
          frequencies[i]++;
          frequencies[j] = -1;
        }
      }
      frequencies[i]++;
    }
  }

  for (i = 0; i < word_count; i++)
  {
    if (frequencies[i] > 0)
    {
      printf("(%s)%d\n", words[i], frequencies[i]);
    }
  }
}

int main()
{
  char input[MAX_LEN];
  char words[MAX_WORDS][MAX_LEN];
  int word_count;

  fgets(input, sizeof(input), stdin);

  cleanAndSplit(input, words, &word_count);

  countFrequencies(words, word_count);

  return 0;
}