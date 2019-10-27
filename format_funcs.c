#include "holberton.h"

int c_print (int character)
{
	*idx++;
	_putchar((char) character);
	return (1);
}

int s_print(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}

int p_print()
{
	_putchar('%');
	return (1);
}
