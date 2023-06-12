#include "main.h"

/**
 * create_file - function that creates a file
 * @filengthame: The name of the file to create
 * @text_content: The string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filengthame, char *text_content)
{
	int opn, wrt, length = 0;

	if (filengthame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opn = open(filengthame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
