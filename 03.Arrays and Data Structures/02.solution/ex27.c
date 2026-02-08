/* ======================================================================
 *  File    : ex27.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 11:02
 *  Updated : 2026-02-08 11:09
 * ====================================================================== */

#include <unistd.h>

void    print_char(char c)
{
        write(1, &c, 1);
}

void    print_str(char *str)
{
        int     i;
        i = 0;
        while(str[i])
        {
                print_char(str[i]);
                i++;
        }
}

void    print_nbr(int nb)
{
        if(nb == -2147483648)
        {
                print_char('-');
                print_char('2');
                print_nbr(147483648);
                return;
        }
        else if(nb < 0)
        {
                print_char('-');
                nb = -nb;
                print_nbr(nb);
                return;
        }
        else if(nb > 9)
        {
                print_nbr(nb/10);
                print_nbr(nb%10);
        }
        else
                print_char(nb + '0');
}

void     Greeting_sum(int a, int b)
{
        print_nbr(a+b);
}

void	Greeting_sub(int a, int b)
{
	print_nbr(b-a);
}

int     main()
{
        int     a,b;
        a = 5;
        b = 6;
        Greeting_sum(a,b);
	print_char('\n');
	Greeting_sub(a,b);
}
