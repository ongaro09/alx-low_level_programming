#include "main.h"
/**
 * _strstr - this function locates a substring
 * @haystack: first substring
 * @needle: where substring occcurs
 * Return: either a haystack or nothing
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == '\0')
		return (haystack);
	do {
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	} while (*haystack);
	return ('\0');
}
