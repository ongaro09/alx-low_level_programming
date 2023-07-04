#inlude "main.h"
/**
 * _strspn -  locates the first occurrence in the string.
 * @s: initial segment.
 * @accept: contains the characters considered valid in the initial segment.
 *
 * Return: returns the value of incr, which represents
 *	the length of the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int incr = 0;
	char *p;

	for (; *s != '\0'; s++)
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*p == *s)
			{
				break;
			}
		}
		if (!*p)
			break;
		incr++;
	}
	return (incr);
}c
