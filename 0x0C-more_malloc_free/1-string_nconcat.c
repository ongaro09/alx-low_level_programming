#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with specified number
 *	of bytes from the second string.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concatenate to s1.
 *
 * Return: Pointer to the newly allocated space.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, size = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size++;

	string = malloc(sizeof(char) * (size + 1));

	if (string == NULL)
		return (NULL);
	size = 0;

	for (i = 0; *(s1 + i); i++)
		string[size++] = *(s1 + i);

	for (i = 0; *(s2 + i) && i < n; i++)
		string[size++] = *(s2 + i);

	string[size] = '\0';

	return (string);
}
