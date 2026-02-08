/* ======================================================================
 *  File    : ex22.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 10:27
 *  Updated : 2026-02-08 10:29
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
        print_str("* Gammal tech *");
}

int     main()
{
        print_str("Hello\n");
        hello_function();
}
