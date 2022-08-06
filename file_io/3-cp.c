#include "main.h"

/**
 *main - Copies the content of a file to another file
 *@argc: Number of arguments passed
 *@argv: Arguments stored
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_o, file_d, r = 1024, w, c;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_o = open(argv[1], O_RDONLY);
	if (file_o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (r == 1024)
	{
		r = read(file_o, buffer, 1024);
		if (r == -1)
	{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	w = write(file_d, buffer, r);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	}
	c = close(file_o);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_o), exit(100);
	c = close(file_d);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_d), exit(100);
	return (0);
}
