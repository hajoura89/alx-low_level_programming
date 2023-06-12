#include "main.h"

/**
 * main - main file that copy file
 * @argc: arguments input
 * @argv: pointers arguments
 * Return: return 0 if all ok
 */
int main(int argc, char *argv[])
{
	int fto, fopen, c_open, c_to;
	int fwrite, fread;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fopen = open(argv[1], O_RDONLY);
	if (fopen == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((fread = read(fopen, buffer, 1024)) > 0)
	{
		fwrite = write(fto, buffer, fread);
		if (fwrite != fread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	c_open = close(fopen);
	if (c_open == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fopen), exit(100);
	c_to = close(fto);
	if (c_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto), exit(100);
	return (0);
}
