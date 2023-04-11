#include <stdio.h>
#include "main.h"
/**
 * _atoi - conversion of a string into an integer
 * @s: sring
 * Return: 0.
 */
int _atoi(char *s)
{
	int res = 1, t = 0;
	unsigned int tes = 0;

	while (!(s[t] <= '9' && s[t] >= '0') && s[t] != '\0')
	{
		if (s[t] == '-')
		{
			res *= -1;
			t++;
		}
	}
	while (s[t] <= '9' && (s[t] >= '0' && s[t] != '\0'))
	{
		tes = (tes * 10) + (s[t] - '0');
		t++;
	}
	tes *= res;
	return (tes);
}
