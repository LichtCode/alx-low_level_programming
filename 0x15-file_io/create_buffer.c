#include "main.h"

/**
 * create_buffer - this function allocates 1024 bytes for
 * each buffer.
 * @file: the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer_text;

	buffer_text = malloc(sizeof(char) * 1024);

	if (buffer_text == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_text);
}
