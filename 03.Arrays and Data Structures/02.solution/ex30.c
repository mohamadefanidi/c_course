/* ======================================================================
 *  File    : ex30.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 11:16
 *  Updated : 2026-02-08 11:19
 * ====================================================================== */

#include <unistd.h>
#include <stdio.h>

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
        int     i,a;
        i = 0;
	scanf("%d",&a);
        while(i <= a)
        {
                hello_function();
                i++;
        }
}
