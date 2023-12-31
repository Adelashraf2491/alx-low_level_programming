#include "main.h"

/**
 * append_text_to_file - IT Appends text at the end of a file.
 * @filename: A pointer to the name of the file to be appended.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	q = write(fo, text_content, len);

	if (fo == -1 || q == -1)
		return (-1);

	close(fo);

	return (1);
}
