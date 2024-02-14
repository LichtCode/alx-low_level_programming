#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w_file- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t file_d;
	ssize_t w_file;
	ssize_t text;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	text = read(file_d, buff, letters);
	w_file = write(STDOUT_FILENO, buff, text);

	free(buff);
	close(file_d);
	return (w_file);
}
