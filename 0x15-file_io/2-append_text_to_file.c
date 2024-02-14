#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file in the program.
 * @txt_content: The string to add to the end of the file.
 *
 * Return: Return (-1) If the function fails or filename is NULL and
 * if the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *txt_content)
{
	int o_file, w_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, txt_content, len);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
