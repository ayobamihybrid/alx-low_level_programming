#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * allocate_memory - allocates memory for an array of strings
 * @words: number of words
 *
 * Return: pointer to the allocated memory
 */
char **allocate_memory(int words)
{
	char **matrix;

	matrix = (char **)malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	return (matrix);
}

/**
 * fill_strings - fills the array of strings with words from the input string
 * @str: input string
 * @matrix: array of strings
 * @words: number of words
 */
void fill_strings(char *str, char **matrix, int words)
{
	char *tmp;
	int i, k = 0, len = 0, c = 0, start, end;

	while (*(str + len))
		len++;

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));

				if (tmp == NULL)
					return;

				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';

				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
	int words;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = allocate_memory(words);

	if (matrix == NULL)
		return (NULL);

	fill_strings(str, matrix, words);

	return (matrix);
}
