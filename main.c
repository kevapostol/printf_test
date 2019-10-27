#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

void _printf(char *format, ...)
{
	char *traverse;
	unsigned int i = 0;

	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		}
	}
	va_end(arg);
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	return (0);
}
