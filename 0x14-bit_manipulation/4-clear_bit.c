#include "main.h"

/**
 * clear_bit - Changes the value of the specified bit to 0.
 * @n: Pointer to the number to be modified.
 * @index: Index indicating the bit to be cleared.
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

