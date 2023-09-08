#include	<stdio.h>
/**
 * main	-	program	that	prints	the	alphabets	in	lowercase
 *
 * Return:	Always	0.
 */

int	main(void)
{
	char	letter;
	for	(letter	=	'a',	letter	<=	'Z';	letter++)
	putchar(letter);
	putchar('\n');
	return	(0);
}
