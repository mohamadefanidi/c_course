/* ======================================================================
 *  File    : ex04.c                                        N  E  X  U  S
 *  Author  : mohammedfa                                    H  A  V  E  N
 *  Created : 2026-02-03 13:27
 *  Updated : 2026-02-03 13:35
 *====================================================================== */

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
        int     num[3];
	num[2] = 0;
        print_str("Enter an integer: ");
	while(num[2] < 2)
	{
        	scanf("%d",&num[num[2]]);
		num[2]++;
	}
        if(num[0] == num[1])
        {
                print_str("same time");
        }
        else
        {
                print_str("No bonus");
        }
}
