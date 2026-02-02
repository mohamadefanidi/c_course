/* ======================================================================
 *  File    : ex21.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-02 09:54
 *  Updated : 2026-02-02 11:28
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

void    ft_printnbr(int nb)
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

int	main(int ac, char *av[])
{
	int	i;
	i = av[1][0] - 48;
	if(ac == 2 && av[1][0] >= '0' && av[1][0] <= '9')
	{
		ft_printstr("The entered number is: ");
		ft_printnbr(i);
	}
	else
		write(1,"error",5);
}
