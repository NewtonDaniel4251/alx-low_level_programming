#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _islower - Checks for lowercase character.
 *
 * @c: The character in ASCII code.
 *
 * Return: Always 0 (Failed) and 1 (Success)
 */
int _islower(int c)
{

	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
