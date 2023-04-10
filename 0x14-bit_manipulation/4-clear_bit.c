#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at the specified index position
 * @n: A pointer to the decimal number whose bit needs to be cleared
 * @index: The index position where the bit needs to be set to 0
 * Return: 1 if the bit was successfully set to 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

