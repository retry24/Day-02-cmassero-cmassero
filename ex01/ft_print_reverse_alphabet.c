#include <unistd.h>

void	ft_putchar();

void	ft_print_alphabet(void)
{
	int i;
	i = 122;

	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}
