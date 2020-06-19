#include <unistd.h>

void ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/
void ft_print_comb(void)
{
	int zero;
	int one;
	int two;

	zero = 0;
	one = 0;
	two = 0;
	while(zero < 10)
	{
		one = zero + 1;
		while(one < 10)
		{
			two = one + 1;
			while(two < 10)
			{
				ft_putchar(zero + '0');
				ft_putchar(one + '0');
				ft_putchar(two + '0');
				ft_putchar(',');
				ft_putchar(' ');
				
				two++;
			}
			one++;
		}
		zero++;
	}
}
/*int main()
{
	ft_print_comb();
}*/
