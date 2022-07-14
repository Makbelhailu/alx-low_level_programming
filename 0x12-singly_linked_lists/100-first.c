#include <stdio.h>
/**
 * before - func exe befor main
 * Rturn: no
 */
void before (void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
