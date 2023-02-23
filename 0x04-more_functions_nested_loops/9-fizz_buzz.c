#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints Fizz, Buzz and FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	return (0);
}
