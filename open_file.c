#include "monty.h"
/**
*/
char *openfile(char *file)
{
    int fd;
    char *buffer = malloc(12345);

    if (!buffer)
    {
        dprintf(STDERR_FILENO, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    
    fd = open(file, O_RDONLY);

    if (fd == -1 || !file)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
        free(buffer);
        exit(EXIT_FAILURE);
    }

    read(fd, buffer, 12345);
    close(fd);
    return (buffer);
}
