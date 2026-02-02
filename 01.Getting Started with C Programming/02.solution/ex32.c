/* ======================================================================
 *  File    : ex32.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-02 14:35
 *  Updated : 2026-02-02 16:35
 * ====================================================================== */ 

#include <unistd.h>
#include <stdio.h>
void    ft_printchar(char c)
{
        write(1, &c, 1);
}

void    ft_printstr(char *str)
{
        int     i;
        i = 0;
        while(str[i])
        {
                ft_printchar(str[i]);
                i++;
        }
}

void    ft_printnbr(int nb)
{
        if(nb == -2147483648)
        {
                ft_printchar('-');
                ft_printchar('2');
                ft_printnbr(147483648);
                return;
        }
        else if(nb < 0)
        {
                nb = -nb;
                ft_printnbr(nb);
                return;
        }
        else if(nb > 9)
        {
                ft_printnbr(nb / 10);
                ft_printnbr(nb % 10);
        }
        else
                ft_printchar(nb + 48);
}

int	main()
{
	int arr[3];
	ft_printstr("Enter your birthdate (day month year): ");
	scanf("%d-%d-%d",&arr[0],&arr[1],&arr[2]);
	ft_printstr("your birthdate is: ");
	ft_printnbr(arr[0]);
	ft_printstr("/");
	ft_printnbr(arr[1]);
	ft_printstr("/");
	ft_printnbr(arr[2]);
	
}
