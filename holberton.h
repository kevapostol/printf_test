#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct format_char
{
	char *f;
	void ((*f)(char *));
} format;

int _putchar(char c);


#endif