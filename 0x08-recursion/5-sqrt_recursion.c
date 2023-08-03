#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root of the number, or -1 if it does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int start = 1;
		int end = n;

		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			int square = mid * mid;

			if (square == n)
			{
				return (mid);
			}
			else if (square < n)
			{
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
		return (-1);
	}
}

