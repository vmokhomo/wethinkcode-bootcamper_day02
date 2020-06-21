#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c);
{
	write(1, &c, 1);
}
void ft_is_negative(int n)
{
	if(n > 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
/*	int main(int n, char *c[])
**	{
**		char p;
**		int i;
**		int s;
**
**		i = 0;
**		p = ' ';
**		while(i < sizeof(c))
**			p = p + c[i];
**			s = s + p;
**
**		char *p = c[1];
**		int passd = atoi(p);
**
**		ft_is_negative(passd);
**
**		return(0);
**	}
*/
