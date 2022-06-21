#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry
 * @haystack: shearched
 * @needle: found
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
