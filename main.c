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
	//Module 3: Closing argument list to necessary clean-up
	va_end(arg);
}
