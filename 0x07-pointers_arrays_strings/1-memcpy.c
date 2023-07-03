#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area where data is copied
 * @src: also a memory location
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
