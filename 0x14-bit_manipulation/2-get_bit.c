#include "main.h"

/**
 * get_bit - Returns the value of a bit at a specified index position
 * @n: A decimal number
 * @index: The index position of the bit to be returned
 * Return: The value (0 or 1) of the bit at the specified index position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
