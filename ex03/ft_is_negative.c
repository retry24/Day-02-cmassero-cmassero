#include<unistd.h>

void	ft_putchar();

void	ft_is_negative(int n)
{
	char N;
	char P;

	N = 'N';
	P = 'P';
	if (n >= 0)
		ft_putchar(P);
	else
		ft_putchar(N);
}
