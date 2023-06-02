#include <stdio.h>

void aesopica(void)__attribute__((constructor));

/**
 * aesopica - prints before the main function is executed.
 */

void aesopica(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
