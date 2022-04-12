#include "main.h"

/**
 * jack_bauer - prints out every minute of the day for jack bauer
 *
 * Description: Prints out every minute of the day for jack bauer.
 * Return: Void
 */
void jack_bauer(void)
{
	int num1 = 0;

	while (num1 <= 2)
	{
		int num2 = 0;

		while (num2 <= 9)
		{
			int num3 = 0;

			while (num3 < 6)
			{
				int num4 = 0;

				while (num4 <= 9)
				{
					_putchar('0' + num1);
					_putchar('0' + num2);
					_putchar(':');
					_putchar('0' + num3);
					_putchar('0' + num4);
					_putchar('\n');

					num4++;
				}

				num3++;
			}

			if (num1 == 2 && num2 == 3)
			{
				break;
			}

			num2++;
		}
		num1++;
	}
}
