#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main function is executed
 *
 * Description: This function is executed automatically before the main
 * function is executed. It prints two sentences to the standard output
 * stream, each on its own line.
 */
void first(void)
{
	puts("You're beat! and yet, you must allow,");
	puts("I bore my house upon my back!");
}
