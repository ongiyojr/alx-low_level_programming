#include "main.h"

/**
 * _strncat - Entry point
 * @dest: the string
 * @src: the string to dest
 * @n: Number of bytes
 * Return: A pointer from string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
