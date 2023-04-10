#include "main.h"
#include <stdlib.h>
/**
 * set_bit - Sets the value of a bit to 1 at the specified index position
 * @n: A pointer to the decimal number whose bit needs to be set
 * @index: The index position where the bit needs to be set to 1
 * Return: 1 if the bit was successfully set to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
