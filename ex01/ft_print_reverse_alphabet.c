#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
	char l;
	char l2;

	l = 'z';
	l2 = 'a';
	while(l >= l2)
	{
		ft_putchar(l);
		l--;
	}
}
/*	int main()	
**	{
**		ft_print_reverse_alphabet();
**
**		return(0);
**	}
*/
