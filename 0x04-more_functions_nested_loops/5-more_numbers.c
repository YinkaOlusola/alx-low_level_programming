#include "main.h"

/**
 * more_numbers - Prints number between 0 and 14
 * @ : No input
 * Return: no return
 */

void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 9) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
