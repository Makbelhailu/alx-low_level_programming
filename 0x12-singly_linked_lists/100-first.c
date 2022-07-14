#include <stdio.h>
/**
 * before - func exe befor main
 * Rturn: no
 */
void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow,");
	printf(" bore my house upon my back!\n");
}
