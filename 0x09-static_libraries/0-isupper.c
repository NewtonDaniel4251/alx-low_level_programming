#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - Checks for uppercase character
 * Returns 1 if c is uppercase
 * Returns 0 otherwise.
 *
 *@c: A parameter Argument an ASCII character.
 *
 * Return: Always 0 (Failed) and 1 (Success)
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
