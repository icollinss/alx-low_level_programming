#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the arguments 
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
