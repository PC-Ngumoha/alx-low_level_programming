#include <stdio.h>
#include "main.h"

/***/
void print_sum_of_multiples(void)
{
	int n;
	int total;

	n = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			total += n;
		}
		else if (n % 3 == 0)
		{
			total += n;
		}
		else if (n % 5 == 0)
		{
			total += n;
		}

		n++;
	}

	printf("%d\n", total);
}
