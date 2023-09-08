#include	<stdio.h>

/**
 * main	-	program	that	prints	the	alphabet	in	lowercase	and	uppercase
 *
 * Return:	Always	0
*/

int	main(void)
{
	char	letter;
	
	for	(letter	=	'a';	letter	<=	'Z';	letter++)

	{
		if	(letter	!=	'a';	letter	!=	'q')
			putchar(letter);
	}
	putchar('\n');
	return	(0);
}
