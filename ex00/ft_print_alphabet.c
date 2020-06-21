#include <unistd.h>

void ft_putchar(char c);
{
	write(1, &c, 1);
}
void ft_print_alphabet(void)
{
	char l;
	char l2;
	//int i;

	//i = 0;
	l2 = 'z';
	l = 'a';
	while(l <= l2)
	{
		ft_putchar(l);
		l++;
	}
}
/*	int main()
**	{
**		ft_print_alphabet();
**
**		return(0);
**	}
*/
