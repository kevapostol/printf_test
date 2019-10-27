#include <limits.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(char *format, ...)
{
	unsigned int i = 0, j;
	unsigned int count = 0;
	int numtemp;
	char *strtemp;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}

		if (format[i] == '%')
		{
			switch(format[i + 1])
				{
					case 'c' :
								numtemp = va_arg(arg, int);
								putchar((char) numtemp);
								count++;
								i++;
								break;
					case 's' :
								strtemp = va_arg(arg, char *);
								for (j = 0; strtemp[j] != '\0'; j++)
								{
									putchar(strtemp[j]);
									count++;
								}
								i++;
								break;
					case '%' :
									putchar('%');
									count++;
									i++;
								break;
				}
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
		len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
		_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
		len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
		_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
		len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
		_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
