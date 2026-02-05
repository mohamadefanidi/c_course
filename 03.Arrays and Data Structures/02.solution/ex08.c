/* ======================================================================
 *  File    : ex08.c                                   N  E  X  U  S
 *  Author  : mohammedfa                               H  A  V  E  N
 *  Created : 2026-02-05 10:50
 *  Updated : 2026-02-05 11:01
 * ====================================================================== */
#include <unistd.h>
#include <stdio.h>

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
                nb = -nb;
                print_char('-');
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
        int     n,i,numbers[5];
        i = 0;
        print_str("Enter 5 numbers:\n");
        while(i < 5)
        {
                print_str("Number ");
                print_nbr(i+1);
                print_str(": ");
                scanf("%d",&numbers[i]);
                i++;
        }
        i = 0;
	n = 0;
        print_str("Sun = ");
        while(i < 5)
        {
                n = n + (i+1);
                i++;
        }
	print_nbr(n);
}
