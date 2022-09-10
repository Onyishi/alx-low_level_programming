#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */

int main(void)
{
	int z;
	char low;
             
	for (z = '0'; z <= '9'; z++)
		putchar(z);
	for (low = 'b'; low <= 'p'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
