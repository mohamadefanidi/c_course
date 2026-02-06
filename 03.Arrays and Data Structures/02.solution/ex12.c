/* ======================================================================
 *  File    : ex12.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-06 10:41
 *  Updated : 2026-02-06 11:33
 * ====================================================================== */

#include <unistd.h>

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
                print_char(nb + '0');
}

int     main()
{
        int     arr[7] = {1,3,2,3,3,1,1};
        int     i,n;
        i = 0;
        n = 0;
        while(i < 7)
        {
                if(arr[i] == 3)
                        n+=3;
		if(arr[i] == 1)
			n+=1;
                i++;
        }
        print_str("Sum of occurrences of the numbers 3 and 1 = ");
        print_nbr(n);
}
