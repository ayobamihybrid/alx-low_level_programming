#include "main.h"

/**
 * get_bit - This retrieves the bit value at a specific index within a decimal number.
 * @n: Number to be searched
 * @index: Index of the bit
 *
 * Return: value of the bit, or -1 if index is out of the valid range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
