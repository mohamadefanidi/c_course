/* ======================================================================
 *  File    : ex05.c                           N  E  X  U  S
 *  Author  : mohammedfa                      H  A  V  E  N
 *  Created : 2026-02-01 12:57
 *  Updated : 2026-02-01 13:02
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
int	main()
{
	ft_printstr("H\ne\n  l\n    l\n     o\nG    a    m    m    a    l\n    T\n   e\n  c\n h!");

}
