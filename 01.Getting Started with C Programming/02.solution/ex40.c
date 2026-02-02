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
	 int arr[11];
        ft_printstr("Enter the price of product 1:");
        scanf("%d",&arr[0]);
        ft_printstr("Enter the price of product 2:");
        scanf("%d",&arr[1]);
        ft_printstr("Enter the price of product 3:");
        scanf("%d",&arr[2]);
        ft_printstr("Enter the price of product 4:");
        scanf("%d",&arr[3]);
        ft_printstr("Enter the price of product 5:");
        scanf("%d",&arr[4]);
        ft_printstr("Enter the quantity of each product:");
        scanf("%d\n%d\n%d\n%d\n%d",&arr[5],&arr[6],&arr[7],&arr[8],&arr[9]);
	ft_printstr("Enter the total amount paid: ");
	scanf("%d",&arr[10]);
        ft_printstr("Shortfall: ");
        ft_printnbr(((arr[0]*arr[5])+(arr[1]*arr[6])+(arr[2]*arr[7])+(arr[3]*arr[8])+(arr[4]*arr[9])) - arr[10]);
	
}
