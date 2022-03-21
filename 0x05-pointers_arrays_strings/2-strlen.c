#include "main.h"

/**
 * _strlen - returns the length of a string
 *  @s; char type pointer
 *  Return: length of a string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
