#include "main.h"
/**
 * _isalpha - Entry point
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122))
	{
	return (1);
	}
	return (0);
}
