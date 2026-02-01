/* ======================================================================
 *  File    : ex14.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-01 15:56
 *  Updated : 2026-02-01 16:02
 * ====================================================================== */ 
#include <unistd.h>
void    ft_printchar(char c)
{
        write(1, &c, 1);
}

void    ft_printstr(char *str)
{
        int     i;
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

int     main()
{
        int     a;
        int     b;
        int     c;
        a = 2;
        b = 3;
        c = 4;
        ft_printstr("The result of multiplying ");
        ft_printnbr(a);
	ft_printstr(", ");
        ft_printnbr(b);
	ft_printstr(", ");
	ft_printstr("and ");
	ft_printnbr(c);
        ft_printstr(" is: ");
        ft_printnbr(a*b*c);
}
