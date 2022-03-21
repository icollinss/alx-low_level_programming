#include "main.h"

/**
 * _strlen - returns the length of a string
 *  @s; char type pointer
 *  Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	for ( s[length] != '\0')
		length++;

	return (length);
}
