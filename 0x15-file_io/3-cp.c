#include "main.h"



/**
 * create_buffer_text - this function allocates 1024 bytes for
 * each buffer.
 * @file: the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer_text(char *file)
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

/**
 * close_file_text - this function closes the file descriptors
 * @file_text: The file descriptor that will be closed
 */

void close_file_text(int file_text)
{
	int x;

	x = close(file_text);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_text %d\n", file_text);
		exit(100);
	}
}

/**
 * main - a function that copies the contents of a file to
 * another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, dest, read_file, output;
	char *buffer_text;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_text = create_buffer_text(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_file = read(from, buffer_text, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer_text);
			exit(98);
		}

		output = write(dest, buffer_text, read_file);
		if (dest == -1 || output == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer_text);
			exit(99);
		}

		read_file = read(from, buffer_text, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_file > 0);

	free(buffer_text);
	close_file_text(from);
	close_file_text(dest);

	return (0);
}
