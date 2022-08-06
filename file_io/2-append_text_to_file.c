#include "main.h"

/**
 *append_text_to_file - Appends text at the end of a file
 *@filename: File name
 *@text_content: Text to append in file
 *Return: Number of letters printed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, nletters;

	if (!filename)
		return (-1);

	fd = open(filename,  O_RDWR | O_APPEND, 0600);
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
