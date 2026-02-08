/* ======================================================================
 *  File    : ex28.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 11:09
 *  Updated : 2026-02-08 11:12
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
void	hello_function()
{
	int	i;
	i = 0;
	while(i <= 5)
	{
        	print_str("* Gammal tech *\n");
        	i++;
	}
}

int	main()
{
	hello_function();
}
