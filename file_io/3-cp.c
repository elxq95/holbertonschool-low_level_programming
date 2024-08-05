#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @argc: Number of parameters.
 * @argv: Array of parameters.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
        char *fone, *ftwo;
        int fdone, fdtwo;
        ssize_t sz = 1024, wr;
        char buffer[1024];

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        fone = argv[1];
        ftwo = argv[2];
        fdone = open(fone, O_RDONLY);
        if (fdone < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fone);
                exit(98);
        }

        fdtwo = open(ftwo, O_WRONLY | O_CREAT | O_TRUNC, 0664);
        if (fdtwo < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ftwo);
                close(fdone);
                exit(99);
        }

        while ((sz = read(fdone, buffer, 1024)) > 0)
        {
                wr = write(fdtwo, buffer, sz);
                if (wr < 0)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ftwo);
                        close(fdone);
                        close(fdtwo);
                        exit(99);
                }
        }

        if (sz < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fone);
                close(fdone);
                close(fdtwo);
                exit(98);
        }

        if (close(fdone) < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdone);
                exit(100);
        }

        if (close(fdtwo) < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdtwo);
                exit(100);
        }

        return (0);
