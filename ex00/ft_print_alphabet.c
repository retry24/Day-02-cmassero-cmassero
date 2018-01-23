#include <unistd.h>

void	ft_putchar();

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}
