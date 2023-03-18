#include <stdio.h>
#include <time.h>
/**
 * main - entery point
 * Return: 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
