#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 * @dest: The copy destination
 * @src: The string to be copied
 *
 * Return: Pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}

	for (; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}
