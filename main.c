#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(char *format, ...)
{
	unsigned int i = 0;
	unsigned int count = 0;
	char temp;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
	}

	if (format[i] == '%')
	{
		switch(format[i + 1])
			{
				case 'c' :
							temp = va_arg(arg,int);		//Fetch char argument
							putchar(temp);
							i++;
							break;
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
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
		_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
	return (0);
}
