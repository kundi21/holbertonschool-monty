#include "monty.h"
/**
 * tokenize -
 * @string:
 * @delim:
 * Return:
 */
char **tokenize(char *string, char delim)
{
	char **tokens;
	char *token;
	int i = 0, length = 0, x = 0;

	for (i = 0; string[i]; i++)
	{
		if (string[i + 1] == delim)
			length++;
	}
	tokens = malloc(sizeof(char *) * (length + 2));
	if (!tokens)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(string, delim);
	while (token != NULL)
	{
		tokens[x] = strdup(token);
		x++;
		token = strtok(NULL, delim);
	}
	tokens[x] = NULL;
	return (tokens);
}
