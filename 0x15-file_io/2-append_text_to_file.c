#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_txt, output, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	file_txt = open(filename, O_WRONLY | O_APPEND);
	output = write(file_txt, text_content, len);

	if (file_txt == -1 || output == -1)
	{
		return (-1);
	}

	close(file_txt);

	return (1);
}
