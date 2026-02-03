/* ======================================================================
 *  File    : ex08.c                                        N  E  X  U  S
 *  Author  : mohammedfra                                   H  A  V  E  N
 *  Created : 2026-02-03 15:20
 *  Updated : 2026-02-03 15:25
 * ====================================================================== */

#include <unistd.h>
#include <stdio.h>

void    print_char(char c)
{
        write(1, &c,1);
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
                write(1, "-", 1);
                write(1, "2", 1);
                print_nbr(147483648);
                return;
        }
        else if(nb < 0)
        {
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
                print_char(nb + 48);
}

int     main()
{
        int     num;
        print_str("Enter an integer: ");
        scanf("%d",&num);
        if(num % 2 == 0)
        {
                print_nbr(num);
                print_str(" is an even number.");
        }
        else
        {
                print_nbr(num);
                print_str(" is an odd number .");
        }
}
