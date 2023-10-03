#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the text file being read
 * @letters: number of letters to be read and printed
 * Return: w- the number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer_mem;
	ssize_t txt;
	ssize_t output;
	ssize_t file_txt;

	file_txt = open(filename, O_RDONLY);
	if (file_txt == -1)
		return (0);
	buffer_mem = malloc(sizeof(char) * letters);
	txt = read(file_txt, buffer_mem, letters);
	output = write(STDOUT_FILENO, buffer_mem, txt);

	free(buffer_mem);
	close(file_txt);
	return (output);
}
