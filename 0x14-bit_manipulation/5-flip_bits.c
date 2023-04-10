#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped
 * to convert one number to another
 * @n: The first decimal number
 * @m: The second decimal number
 * Return: The number of bits that need to be flipped to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nflips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}
