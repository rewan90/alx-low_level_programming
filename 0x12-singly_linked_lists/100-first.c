#include <stdio.h>

/**
 * bmain - function executed first thing 
 * Return: no one.
 */

void __attribute__((constructor)) bmain()
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}