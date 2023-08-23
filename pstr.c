#include "main.h"
/**
 * pstr - print string
 * @c: string
 * Return: nom of bytes
 */
int pstr(char *c)
{
	int b = 0;

	if (c)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			ptchr(c[b]);
		}
	}
	return (b);
}
