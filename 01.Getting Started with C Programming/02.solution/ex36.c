/* ======================================================================
 *  File    : ex36.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-02 15:33
 *  Updated : 2026-02-02 15:40
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

int     main()
{
        int arr[5];
        ft_printstr("Enter your grades in 5 subjects:");
        scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
        ft_printstr("Total marks: ");
	ft_printnbr(arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
        ft_printstr("\nMissing marks: ");
	ft_printnbr(500 - (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]));
}
