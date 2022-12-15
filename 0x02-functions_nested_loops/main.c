#include <limits.h>
#include "main.h"
#include "1-alphabet.c"
#include "2-print_alphabet_x10.c"
#include "3-islower.c"
#include "001-putchar.c"
#include "7-print_last_digit.c"

/**
 * main - call all functions
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	// /* Print the alphabets*/
	// print_alphabet();
	// _putchar('\n');

	// /* Print alphabets 10 times */
	// print_alphabet_x10();
	// _putchar('\n');

	// /* Return 1 if lowercase or 0 if uppercase */
	// r = _islower('H');
	// _putchar(r + '0');
	// r = _islower('o');
	// _putchar(r + '0');
	// r = _islower(108);
	// _putchar(r + '0');
	// _putchar('\n');
	// return (0);
	// _putchar('\n');

	// /* Check task 5: Sign */
	// r = print_sign(98);
	// _putchar(',');
	// _putchar(' ');
	// _putchar(r + '0');
	// _putchar('\n');
	// r = print_sign(0);
	// _putchar(',');
	// _putchar(' ');
	// _putchar(r + '0');
	// _putchar('\n');
	// r = print_sign(0xff);
	// _putchar(',');
	// _putchar(' ');
	// _putchar(r + '0');
	// _putchar('\n');
	// r = print_sign(-1);
	// _putchar(',');
	// _putchar(' ');
	// _putchar(r + '0');
	// _putchar('\n');
	// return (0);

	/*Print last digit of a number*/
	r = print_last_digit(INT_MIN);
	_putchar(INT_MIN);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
