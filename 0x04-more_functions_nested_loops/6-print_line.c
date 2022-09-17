#include "main.h"

/**
 *  * print_line - prints line
 *   * @n: param
 */

void print_line(int n)
{
		int lines;
			
		if (n > 0)
		{
			for (line = 0; line <= n; line++)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
}

