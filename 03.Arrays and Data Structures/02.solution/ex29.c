/* ======================================================================
 *  File    : ex29.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 11:13
 *  Updated : 2026-02-08 11:15
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
void    hello_function()
{
	print_str("hello Gammal tech\n");
}

int     main()
{
	int	i;
	i = 0;
	while(i <= 5)
	{
        	hello_function();
		i++;
	}
}
