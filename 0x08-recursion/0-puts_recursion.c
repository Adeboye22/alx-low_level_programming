#include "main.h"

/**
 *  main - print a string
 *
 *  Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	
	{
		putchar(*s);
		_puts_recursion(s +1);
	}
	else
	{
	putchar('\n');
	}
}
