/* ======================================================================
 *  File    : ex15.c                            N  E  X  U  S
 *  Author  : mohammedfa                        H  A  V  E  N
 *  Created : 2026-02-04 11:59
 *  Updated : 2026-02-04 12:29
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
        int     a;
	int	b;
	int	c;
        a = 1;
	b = 0;
	print_str("Enter a number: ");
	scanf("%d",&c);
        while(a <= c)
        {
        	print_nbr(a);
		print_char(' ');
		b = b + a;
		a++;	
        }
	print_str("\n");
	print_str("Sum of numbers: ");
	print_nbr(b);
}
