#include "monty.h"
/**
 * check_num - function that checks if a whole string is
 * composed of numbers
 * @num: string to check
 * Return: 1 if the string is a number, 0 otherwise
 */
int check_num(char *num)
{
	int length = strlen(num);
	int i = 0, check = 1;

	if (!num)
		return (0);
	for (i = 0; i < length; i++)
	{
		if (!isdigit(num[i]))
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * tokenize - function that tokenizes a string into an array of strings
 * @string: string to tokenize
 * @delim: delimitators for strtok
 * Return: an array of tokenized strings
 */
char **tokenize(char *string, char delim)
{
	char **tokens;
	char *token;
	int i = 0, length = 0, x = 0;

	for (i = 0; string && string[i]; i++)
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
	token = strtok(string, &delim);
	while (token != NULL)
	{
		tokens[x] = strdup(token);
		x++;
		token = strtok(NULL, &delim);
	}
	tokens[x] = NULL;
	return (tokens);
}
