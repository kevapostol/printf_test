#include <limits.h>
#include <stdio.h>
#include "holberton.h"

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
	/*ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");*/
	return (0);
}

void _printf(char* format,...)
{
	char *traverse;
	unsigned int i;
	char *s;

	//Module 1: Initializing _printf's arguments
	va_list arg;
	va_start(arg, format);

	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while( *traverse != '%' )
		{
			putchar(*traverse);
			traverse++;
		}

		traverse++;
		/*
		//Module 2: Fetching and executing arguments
		switch(*traverse)
		{
			case 'c' : i = va_arg(arg,int);		//Fetch char argument
						putchar(i);
						break;

			case 'd' : i = va_arg(arg,int); 		//Fetch Decimal/Integer argument
						if(i<0)
						{
							i = -i;
							putchar('-');
						}
						puts(convert(i,10));
						break;

			case 'o': i = va_arg(arg,unsigned int); //Fetch Octal representation
						puts(convert(i,8));
						break;

			case 's': s = va_arg(arg,char *); 		//Fetch string
						puts(s);
						break;

			case 'x': i = va_arg(arg,unsigned int); //Fetch Hexadecimal representation
						puts(convert(i,16));
						break;
		}
	}
	*/
	//Module 3: Closing argument list to necessary clean-up
	va_end(arg);
}