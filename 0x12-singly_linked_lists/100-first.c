#include <stdio.h>
/**
 * befmain - function that prints before main
 * Return: 0 Always.
 */
void __attribute__((constructor)) befmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
