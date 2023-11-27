#include "main.h"
#include <stdio.h>

/**
 * if_error - handles errors
 * @file_from: file to copy from
 * #file_to: file to copy to
 * Return: none
 */
void if_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                exit(99);
	}
}

/**
 * main - copy file content to another file
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if_error(file_from, file_to, argv);

	return (0);
}
