#include "main.h"

#define BUFFER_SIZE 1024

/**
 * close_file - Closes a file descriptor and handles errors
 * @fd: The file descriptor to close
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * *error exist - Prints an error message and exits with a given code
 * @code: The exit code
 * @message: The error message
 * #filename: THe file name related to the error
 */

void error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * main - Entry point, copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, exits with an error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close_file(file_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close_file(file_from);
			close_file(file_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close_file(file_from);
		close_file(file_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	close_file(file_from);
	close_file(file_to);

	return (0);
}

