#include	<stdio.h>

/**
 * main	-	program	that	prints	the	alphabet	in	lowercase	and	uppercase
 *
 * Return:	always	0
 */

int	main(void)

{
	char	letter[52]	=	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

		for(letter		=	'a';	letter	<=	'z';	letter++)
		putchar(letter);
	
		for(letter		=	'A';	letter	<=	'Z';	letter++)
		putchar(letter);
		putchar('\n');
	return	(0);
}
