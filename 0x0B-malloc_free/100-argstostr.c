#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of
 * your program
 * @ac: int type
 * @av: char pointer to a pointer
 * Return: pointer to a new string,
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *z;
	int a, b, c, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}

	z = malloc(sizeof(char) * (len + 1);
	if (z == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			z[c] = av[a][b];
			z++;
		}
		z[c] = '\n';
		c++;
	}
	return (z);
}
