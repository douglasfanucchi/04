#include <unistd.h>

void	putbr_recursive(int nb)
{
	char	cnbr;

	if (nb / 10 == 0)
	{
		cnbr = nb + '0';
		write(1, &cnbr, 1);
		return ;
	}
	putbr_recursive(nb / 10);
	cnbr = nb % 10 + '0';
	write(1, &cnbr, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb += 2000000000;
		}
		nb *= -1;
	}
	putbr_recursive(nb);
}
