#include "main.h"

/**
 * _isdigit - Entry point
 * @x: the number to be checked
 * Return: 1 for character digit or 0 for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
