/* ======================================================================
 *  File    : ex24.c                         N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-08 10:33
 *  Updated : 2026-02-08 10:37
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

void    Greeting_First()
{
        print_str("* The best website *");
}

void     Greeting_second()
{
        print_str("Hello* Gammal tech *\n");
}

int     main()
{
        Greeting_second();
        Greeting_First();
}
