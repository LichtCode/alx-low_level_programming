#include "main.h"

/**
 * close_file_txt - Closes the file descriptors.
 * @file_txt: The file descriptor to be closed.
 */

void close_file_txt(int file_txt)
{
	int close_txt;

	close_txt = close(file_txt);

	if (close_txt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_txt);
		exit(100);
	}
}
