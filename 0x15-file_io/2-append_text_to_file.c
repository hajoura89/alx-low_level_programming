#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filengthame: The name of the file
 * @text_content: The string to add to the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filengthame, char *text_content)
{
	int opn, wrt, length = 0;

	if (filengthame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opn = open(filengthame, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
