#include <stdio.h>

/**
 * startupfunc - exec before main funct is exec
 * Return: none
 */
void startupfunc(void) __attribute__ ((constructor));
void startupfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
