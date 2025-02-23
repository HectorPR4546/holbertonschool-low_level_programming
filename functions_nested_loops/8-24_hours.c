#include "main.h"
/**
 * jack_bauer - entry point
 * Retyrn: 0 (success)
 */
void jack_bauer(void)
{
	int h, p;

	h = 0;

	while (h < 24)
	{
		p = 0;
		while (p < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar('\n');
			p++;
		}
		h++;
	}
}



