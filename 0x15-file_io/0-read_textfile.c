#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters that could be read and printed, or 0 if
 * the file could not be opened, read, or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;
	if (!filename)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
