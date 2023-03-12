#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Checks for a digit (0 through 9)
 * Returns 1 if c is a digit
 * Returns 0 otherwise.
 *
 * @c: A parameter for the function.
 *
 * Return: Always 1 (Success) and 0 (Failed)
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
