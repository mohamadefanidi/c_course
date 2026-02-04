/* ======================================================================
 *  File    : ex14.c                                   N  E  X  U  S
 *  Author  : mohammedfa                               H  A  V  E  N
 *  Created : 2026-02-04 11:57
 *  Updated : 2026-02-04 11:59
 * ====================================================================== */
#include <unistd.h>

void    print_char(char c)
{
        write(1 ,&c, 1);
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
                nb = -nb;
                print_char('-');
                print_nbr(nb);
        }
        else if(nb > 9)
        {
                print_nbr(nb/10);
                print_nbr(nb%10);
        }
        else
                print_char(nb + 48);
}
int     main()
{
        int     i;
        i = 1;
        while(i <= 10)
        {
                print_nbr(i);
                print_str(" ");
                i++;
        }
}
