#include<stdio.h>

int	ft_putchar();

void	ft_write(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	char n;
	char i;
	char a;

	n = '0';
	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			a = i + 1;
			while (a <= '9')
			{
				ft_write(n, i, a);
				if (n != '7' || i != '8' || a != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a++;
			}
			i++;
		}
		n++;
	}
}
