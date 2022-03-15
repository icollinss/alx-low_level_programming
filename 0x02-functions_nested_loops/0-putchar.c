#include "main.h"

/**
 * main - main block
 * print '_putchar'
 * Return: Always 0(Success)
 */
int main(void)
{
	char c[10] = "_Putchar";
	int i = 0;

	while (i < 9)
	{
	_putchar(c[i]);
	i++;
	}
	_putchar('\n');

	return (0);
}
