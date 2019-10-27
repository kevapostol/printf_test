#include <limits.h>
#include <stdio.h>
#include "holberton.h"
void _printf(char *format, ...);
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	return (0);
}

void _printf(char *format, ...)
{
	char *traverse;
	unsigned int i;
	char *s;

	va_list arg;

	va_start(arg, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
		}

		traverse++;
	va_end(arg);
}
