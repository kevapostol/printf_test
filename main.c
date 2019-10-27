#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - Entry point
 * @format: format
 * Return: integer
 */
int _printf(char *format, ...)
{
	unsigned int i = 0, numtemp, count = 0;
	char *strtemp;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
							count += c_print(va_arg(arg, int));
							i++;
							break;
				case 's':
							count += s_print(va_arg(arg, char *));
							i++;
							break;
				case '%':
							count += p_print();
							i++;
							break;
				default:
							exit(100);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);
	return (count);
}
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
printf("Len:[%d]\n", len2);
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
len = _printf("Character:[%c]\n", 'H');
len2 = printf("Character:[%c]\n", 'H');
printf("Len:[%d]\n", len2);
len = _printf("String:[%s]\n", "I am a string !");
len2 = printf("String:[%s]\n", "I am a string !");
printf("Len:[%d]\n", len2);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
printf("Len:[%d]\n", len2);
return (0);
}
