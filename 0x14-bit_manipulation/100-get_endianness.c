#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * This function determines the endianness of the system by creating a pointer
 * to an integer and then casting it to a character pointer. By examining the
 * first byte of the integer through the character pointer, the function can
 * determine whether the system is big endian or little endian
 * Return: 0 if the system is big endian, 1 if it is little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
