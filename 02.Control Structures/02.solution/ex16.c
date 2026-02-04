/* ======================================================================
 *  File    : ex16.c                                 N  E  X  U  S
 *  Author  : mohammedfa                             H  A  V  E  N
 *  Created : 2026-02-04 12:30
 *  Updated : 2026-02-04 12:42
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
        int     i;
        print_str("Enter a number less than 15: ");
	scanf("%d",&i);
	if(i < 15)
	{
        	while(i <= 15)
        	{
                	print_nbr(i);
			print_str(" ");
                	i++;
        	}
	}
	else
		print_str("Enter a number less than 15");
}
