/* ======================================================================
 *  File    : ex20.c                                    N  E  X  U  S
 *  Author  : mohammedfa                                H  A  V  E  N
 *  Created : 2026-02-04 13:06
 *  Updated : 2026-02-04 13:16
 * ====================================================================== */
#include <unistd.h>
#include <stdio.h>
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
        int     i[2];
        print_str("Enter the furst number: ");
        scanf("%d",&i[0]);
        print_str("Enter the second number: ");
        scanf("%d",&i[1]);
        if(i[0] - i[1] < 0)
        {
                while(i[0] <= i[1])
                {
                        print_nbr(i[0]);
                        print_str(" ");
                        i[0]++;
                }
        }
        else if(i[0] - i[1] > 0)
        {
                while(i[1] <= i[0])
                {
                        print_nbr(i[1]);
                        print_str(" ");
                        i[1]++;
                }
        }
	else
		print_str("NUmbers are equal.");
}
