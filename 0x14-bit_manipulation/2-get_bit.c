#include "main.h"

/**
 * get_bit - Returns value of a bit at an index in a decimal number
 * @n: Number to be searched
 * @index: Index of the bit
 *
 * Return: value of the bit, or -1 if index is out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
