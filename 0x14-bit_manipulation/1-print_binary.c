#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			fputchar('1');
			count++;
		}
		else if (count)
			fputchar('0');
	}
	if (!count)
		fputchar('0');
}
