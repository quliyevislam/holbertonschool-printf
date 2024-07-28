#include "main.h"
/**
 * print_string - Prints a string to the standard output
 * @ptr: Pointer to the string to be printed
 *
 * Return: The length of the string
 */
int print_string(char *ptr)
{
	int len = 0;

	while (ptr[len])
	{
		_putchar(ptr[len]);
		len++;
	}

	return (len);
}
