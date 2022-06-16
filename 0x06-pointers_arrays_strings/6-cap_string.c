#include "main.h"
#include <stdio.h>

/**
 * cap_string - pacotalize strings
 * @s: character
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else if(s[i] == 10)
		{
			s[i] = '\t';
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] + 32;
			}
		}
		if (s[i] == '.' || s[i] == '!')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		if (s[i] == ' ' || s[i] == '\t')
		{
			s[i] = ' ';
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
	}
		return (s);
}
