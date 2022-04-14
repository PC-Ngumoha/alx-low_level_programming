#include "main.h"

/**
 * more_numbers - prints numbers 10 times
 *
 * Description: prints out numbers from 0 to 14 to the
 * terminal ten times.
 * Return: Void
 */
void more_numbers(void)
{
	int times;
	int n;

	for (times = 0; times < 10; times++)
	{
		n = 0;

		while (n < 15)
		{
			int curr;

			curr = n;

			if (curr / 10)
			{
				_putchar('0' + (curr / 10));
				curr = curr % 10;
			}
			_putchar('0' + curr);
			n++;
		}
		_putchar('\n');
	}
}
