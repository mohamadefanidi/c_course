/* ======================================================================
 *  File    : ex04.c                                   N  E  X  U  S
 *  Author  : mohammedfa                               H  A  V  E  N
 *  Created : 2026-02-05 10:11
 *  Updated : 2026-02-05 10:16
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
        int     i,numbers[7];
        i = 0;
        print_str("Enter 7 numbers:\n");
        while(i < 7)
        {
                print_str("Number ");
                print_nbr(i+1);
                print_str(": ");
                scanf("%d",&numbers[i]);
                i++;
        }
        i = 3;
        print_str("Entered numbers (last 4): ");
        while(i < 7)
        {
                print_nbr(numbers[i]);
                print_char(' ');
                i++;
        }
}
