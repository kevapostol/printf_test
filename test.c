#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: argument vector
 * Return: void returns nothing
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i += 1)
		printf("%s\n", argv[i]);
	return (0);
}
