/* ======================================================================
 *  File    : ex09.c                                                        N  E  X  U  S
 *  Author  : mohammedfa                                                         H  A  V  E  N
 *  Created : 2026-02-03 15:26
 *  Updated : 2026-02-03 15:36
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
        print_str("Choose a shape:\n1. Square\n2. Triangle\nEnter your choice (1 or 2): ");
        scanf("%d",&num);
        if(num == 1)
        {
                print_str("*****\n*****\n*****\n*****\n*****");
        }
	else if(num == 2)
        {
                print_str("*\n**\n* *\n*  *\n*   *\n*    *\n*******");
        }
	else
	{
		print_str("error");
	}
}
