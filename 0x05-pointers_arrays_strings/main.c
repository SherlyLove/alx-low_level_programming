#include "main.h"
#include "_putchar.c"
#include "7-puts_half.c"
#include "8-print_array.c"
#include "9-strcpy.c"

/* prototypes */
int puts_half_main(void);
int print_array_main(void);
int _strcpy_main(void);

/**
 * main - call other functions for different tasks
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/* Function calls */
	puts_half_main();
	// print_array_main();
	// _strcpy_main();

	return (0);
}

/**
 * puts_half_main - main function for 7-puts_half.c
 *
 * Output: 56789
 *
 * Return: 0 (success)
 */
int puts_half_main(void)
{
	char *str;

	// str = "0123456789";
	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	puts_half(str);
	return (0);
}

/**
 * print_array_main - 8-print_array.c
 *
 * Output: 98, 402, -198, 298, -1024
 *
 * Return: 0 (success)
 */
int print_array_main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}

/**
 * _strcpy_main - 9-strcpy.c
 *
 * Output:
 * 	First, solve the problem. Then, write the code
 * 	First, solve the problem. Then, write the code
 *
 * Return: 0 (success)
 */
int _strcpy_main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
