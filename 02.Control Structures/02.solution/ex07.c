/* ======================================================================
 *  File    : ex07.c                                        N  E  X  U  S
 *  Author  : mohammedfa                                    H  A  V  E  N
 *  Created : 2026-02-03 15:00
 *  Updated : 2026-02-03 15:18
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
        int     num[2];
        print_str("Enter salary and number of vacation days: ");
        scanf("%d",&num[0]);
	scanf("%d",&num[1]);
        if(num[1] <= 21)
        {
		print_str("Increment: ");
                print_nbr(10000);
		print_str("\nNew salary: ");
		print_nbr(num[0] + 10000);
        }
        else
        {
        	print_str("Increment: ");
		print_nbr(5000);
		print_str("\nNew salary: ");
		print_nbr(num[0] + 5000);
        }
}
