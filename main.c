#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

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
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	return (0);
}
