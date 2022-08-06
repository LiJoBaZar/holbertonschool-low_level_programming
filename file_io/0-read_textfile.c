#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to the standard output
 *@filename: File to be read
 *@letters: Number of letter the proram will read and write
 *Return: Number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nletters;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	nletters = read(fd, buffer, letters);
	if (nletters == -1)
	{
		free(buffer);
		return (0);
	}
	nletters = write(STDOUT_FILENO, buffer, nletters);
	if (nletters == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (nletters);
}
