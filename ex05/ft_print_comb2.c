#include<unistd.h>

void	ft_putchar();

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (!(a == 9 && b == 9 && c== 9 && d == 9))
	{
		d++;
		if (d == 10)
		{
			d = 0;
			c++;
			if (c == 10)
			{
				c = 0;
				b++;
				if (b == 10)
				{
					b = 0;
					a++;
				}
			}
		}
		ft_putchar(a+'0');
		ft_putchar(b+'0');
		ft_putchar(' ');
		ft_putchar(c+'0');
		ft_putchar(d+'0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}
