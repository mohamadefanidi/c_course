/* ======================================================================
 *  File    : ex29.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-02 13:21
 *  Updated : 2026-02-02 13:29
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

int     main(int ac, char *av[])
{
        int     a;
        int     b;
        int     c;
        int     d;
        a = av[1][0] - 48;
        b = av[2][0] - 48;
        c = av[3][0] - 48;
        d = av[4][0] - 48;	
        if(ac == 5)
        {
                ft_printstr("Sum of the first two numbers is: ");
                ft_printnbr(a + b);
                ft_printstr("\nproduct of the next two numbers is: ");
                ft_printnbr(c * d);
        }
        else
                write(1,"error",5);
}
