#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: String to be searched
 * @accept: string in which the referred bytes is to be matched
 * Return: pointer that matches one of the bytes, otherwise Null
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}c
