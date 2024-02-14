
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @txt_content: A pointer to a string to write to the file in this function.
 *
 * Return: returns -1 if the function fails - .
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *txt_content)
{
	int file_d, w_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(file_d, txt_content, len);

	if (file_d == -1 || w_file == -1)
		return (-1);

	close(file_d);

	return (1);
}
