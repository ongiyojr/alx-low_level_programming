#include <stdio.h>

/**
 * _strlen - Entry point
 * @str: The string to get the length of
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
