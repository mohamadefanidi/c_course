/* ======================================================================
 *  File    : ex11.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-01 14:29
 *  Updated : 2026-02-01 15:10
 * ====================================================================== */ 
#include <unistd.h>
void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
}

void	ft_printnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		ft_printnbr(147483648);
		return;
	}
	else if(nb < 0)
	{
		nb = -nb;
		ft_printnbr(nb);
		return;
	}
	else if(nb > 9)
	{
		ft_printnbr(nb / 10);
		ft_printnbr(nb % 10);
	}
	else
		ft_printchar(nb + 48);
}

int	main()
{
	int	a;
	int	b;
	a = 10;
	b = 5;
	ft_printstr("sum: ");
	ft_printnbr(a + b);
}
