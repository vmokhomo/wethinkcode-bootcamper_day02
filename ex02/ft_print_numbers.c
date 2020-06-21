#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers(void)
{
	int i;
	int i1;

	i1 = '9';
	i = '0';

	while(i <= i1)
	{
		ft_putchar(i);
		i++;
	}
}
/*	int main()
**	{
**		ft_print_numbers();
**
**		return(0);
**	}
*/
