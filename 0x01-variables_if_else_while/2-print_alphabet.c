#include	<stdio.h>
/**
 * main	-	program	that	prints	the	alphabets	in	lowercase
 *
 * Return:	Always	0	(Success)
 */
int	main(void)
{
	char	letter[26]	=	"abcdefghijklmnopqrstuvwxyz";
	int	i;

	for	(i	=	0;	i	<	26;	i++)
	putchar(letter[i]);
	putchar('\n');
	return	(0);
}
