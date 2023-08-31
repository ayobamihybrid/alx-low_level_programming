#include "main.h"

/**
 * set_bit - Modifies the value of the bit at the specified index to 1.
 * @n: Pointer to the number to be updated.
 * @index: Index indicating the bit to be set to 1.
 *
 * Return: for success, return 1, for failure, return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

