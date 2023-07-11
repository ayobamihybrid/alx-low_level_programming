#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments into a single string
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the concatenated string, or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}

	len += ac;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}

		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}

	return (str);
}
