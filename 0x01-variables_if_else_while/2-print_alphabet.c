#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)

{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
