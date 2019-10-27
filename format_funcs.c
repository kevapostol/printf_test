#include "holberton.h"

int c_print (int character, unsigned int *idx)
{
	*idx++;
	_putchar((char) character);
	return (1);
}

int s_print(char *str, unsigned int *idx)
{
	*idx++;
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}

int p_print(unsigned int *idx)
{
	*idx++;
	_putchar('%');
	return (1);
}
