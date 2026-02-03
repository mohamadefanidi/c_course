/* ======================================================================
 *  File    : ex03.c                                     N  E  X  U  S
 *  Author  : mohammedfa                                 H  A  V  E  N
 *  Created : 2026-02-03 12:53
 *  Updated : 2026-02-03 13:27
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
	int	i;
        int     weights[6];
	i = 0;
	print_str("Enter 5 weights: ");
	while(i < 5)
	{

		scanf("%d",&weights[i]);
		i++;
	}
	weights[5] = weights[0] + weights[1] + weights[2] + weights[3] + weights[4];
	if(weights[6] <= 500)
	{
		print_str("Okay");
	}
	else
		print_str("Error");
	return 0;
}
