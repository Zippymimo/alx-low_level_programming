#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: 1 on success and  -1 on failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
