#include	<stdio.h>

/**
 * main	-	Prints	without	q	and	e
 *
 * Return:	Always	0
*/

int	main(void)
{
	int	i;
		for	(i	=	97;	i	<	123;	i++)

		putchar(i	!=	101	&&	i	!=	113);
		putchar('\n');
	return	(0);
}
