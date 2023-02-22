#include "main.h"
/**
 * main - prints alphabets in lower case
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	int count;

	for (count = 0; count < 26; count++)
	{
		_putchar(alp[count]);
	}

	_putchar('\n');

	return (0);
}
