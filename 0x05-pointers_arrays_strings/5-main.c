#include "main.h"
#include <stdio.h>
#include "5-rev_string.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	// char s[10] = "My School";
	char s[11] = "Holberton!";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

// expected output: !notrebloH