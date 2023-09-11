#include	<stdio.h>

/**
 * main	-	prints	the	lowercase	alphsbets	in	reverse,
 * followed	by	a	new	line
 * Retuen:	0	(Success)
 */

int	main(void)

{

	char	ch;

	for	(ch	=	'z';	ch	>=	'a';	ch--)

		putchar(ch);
	putchar	('\n');
	return	(0);
}

