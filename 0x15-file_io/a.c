#include <stdio.h>
#include <stdlib.h>

int main(char *argc, char *argv) 
{
	char *r = argv;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1,  };
	int i = 0;

	while (*r)
	{
		for (i = 0; i < 5; i++)
		{
			if (*r == a[i] || *r == a[i] - 32)
				*r = n[i] + '0'; 
			printf("%s", r);
		}
		return (main + 1);
	}
	return (0);
}
