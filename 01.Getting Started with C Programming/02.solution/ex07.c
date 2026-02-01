/* ======================================================================
 *  File    : ex07.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-01 13:13
 *  Updated : 2026-02-01 13:18
 * ====================================================================== */ 
#include <unistd.h>
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
int     main()
{
        ft_printstr("    *    \n   * *\n  *   *\n *     *\n*********");

}
