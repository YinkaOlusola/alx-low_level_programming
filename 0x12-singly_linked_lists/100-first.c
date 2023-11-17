#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_text - Prints a text to the standard output before
 * the main function is executed
 */


void print_text(void) __attribute__((constructor));

void print_text(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
