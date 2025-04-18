#include <stdlib.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to be indexed.
 * @index: index of the specified bit to be set.
 *
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
