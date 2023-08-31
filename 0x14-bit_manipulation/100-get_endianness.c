#include "main.h"

/**
 * get_endianness - This checks if the machine is a little or a big endian
 * Return: 0 for big, and 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
