#include "main.h"
#include <stdbool.h>

/**
 * wildcmp - compares two strings with '*' wildcard using recursion.
 * @s1: input string 1.
 * @s2: input string 2 with '*' wildcard.
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
