#include <stdio.h>

/**
 * main - Print Program Name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
