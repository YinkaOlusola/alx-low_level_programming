#include "main.h"

/**
 * jack_bauer - A program that prints every minute of the day
 *
 * @: Doesn't take any argument
 *
 * Return: 0 and prints every minute of the day
 */

void jack_bauer(void)
{
	int hr_1, hr_2, min_1, min_2, hr_2_max;

	for (hr_1 = 0; hr_1 < 3; hr_1++)
	{
		if (hr_1 < 2)
		{
			hr_2_max = 10;
		}
		else
		{
			hr_2_max = 4;
		}
		for (hr_2 = 0; hr_2 < hr_2_max; hr_2++)
		{
			for (min_1 = 0; min_1 < 6; min_1++)
			{
				for (min_2 = 0; min_2 < 10; min_2++)
				{
					_putchar(hr_1 + '0');
					_putchar(hr_2 + '0');
					_putchar(':');
					_putchar(min_1 + '0');
					_putchar(min_2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
