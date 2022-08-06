#include "main.h"

/**
 *create_file - Creates a file
 *@filename: File to be created
 *@text_content: Text to write in file
 *Return: Number of letters printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, nletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		nletters = write(fd, text_content, i);
		if (nletters == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
