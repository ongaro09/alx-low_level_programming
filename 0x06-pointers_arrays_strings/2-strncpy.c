#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @src: a pointer to the source string
 * @dest: a pointer to the destination string
 * @n: max number of characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
